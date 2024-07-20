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


int main()
{
    ll n,x;cin>>n>>x;
    int price[n],pages[n];
    f(i,0,n) cin>>price[i];
    f(i,0,n) cin>>pages[i];

    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            //notpick
            dp[i][j]=dp[i-1][j];
            //pick
            if(price[i-1]<=j){
                dp[i][j]=max(dp[i][j],pages[i-1]+dp[i-1][j-price[i-1]]);
            }
        }
    }
    cout<<dp[n][x]<<en;



    return 0;
}