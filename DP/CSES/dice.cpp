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
void solve(){
   ll n;cin>>n;
   vi dp(n+1,0);
   // Here dp[i] represents no. of ways to make sum i
   // to make sum only one option 
   dp[0]=1;
   for(int i=1;i<=n;i++){
    
    for(int j=1;j<=6;j++){
        if(i-j>=0){
            dp[i]+=dp[i-j]%mod;
        }
    }
   }
   cout<<dp[n]%mod<<en;
}
 
 
int main()
{
    solve();
    return 0;
}