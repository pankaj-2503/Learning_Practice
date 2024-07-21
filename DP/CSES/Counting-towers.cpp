#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define en endl
#define all(x) x.begin(),x.end()
#define f(i,from,to) for(ll i=from;i<to;i++)
#define fe(i,from,to) for(ll i=from;i<=to;i++)
#define fre(i,from,to) for(ll i=from;i>=to;i--)
#define fr(i,from,to) for(ll i=from;i>to;i--)
#define pb(x) push_back(x)
#define mx(v) *max_element(v.begin(), v.end())
#define mn(v) *min_element(v.begin(), v.end())
#define vi vector<ll>
#define vip vector<pair<ll,ll>>

int mod=1e9+7;
vector<vector<int>>dp(1e6+1,vector<int>(2));
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        // state:
        // dp[i][0] -> represent no. of ways to fill grid from ith row to top such that there is 1*2 block on the i-1)th row trying to extend forward
        // dp[i][1] -> represent no. of ways to fill grid from ith row to top such that there is 2 ,1*1 block on the i-1)th row trying to extend forward

        // transition:
        // dp[i][0]-> dp[i+1][1]+2*dp[i+1][0] , start 2 blocks of 1*1 each, start 1 block of 1*2 , dont' close any of them,close one of them
        // dp[i][1]-> dp[i+1][0]+dp[i+1][1]+dp[i+1][1]+2*dp[i+1][1]+dp[i+1][0]; , close complete block(start 2 blocks of 1*1 each,start 1 block of 1*2), dont't close the block

        // base case
        dp[n][0]=1;
        dp[n][1]=1;

        for(int i=n-1;i>=0;i--){
            
                dp[i][0]=((2*1ll*dp[i+1][0])+dp[i+1][1])%mod;
                dp[i][1]=((4*1ll*dp[i+1][1])+dp[i+1][0])%mod;
            
        }
        cout<<(dp[1][0]+dp[1][1])%mod<<en;
    }
    
    
    return 0;
}