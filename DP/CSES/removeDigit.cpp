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

set<int>getDigits(int p){
    set<int>ans;
    while(p>0){
        ans.insert(p%10);
        p/=10;
    }

    return ans;
}
int dp[100001001];
int main()
{

    // ll n;cin>>n;
    
    // for(int i=0;i<=n;i++){
    //   if(i==0) dp[0]=0;
    //   else{
    //     dp[i]=1e9;
    //     // there might be repetion in digits that's why we are using set to store digits
    //     auto s=getDigits(i);
    //     for(auto d:s){
    //         dp[i]=min(dp[i-d]+1,dp[i]);
    //     }
    //   }
    // }

    // cout<<dp[n]<<en;

    // or we can also do this

    ll n;cin>>n;
    int steps=0;
   while(n>0){
        string p=to_string(n);
        char mx='0';
        for(auto j:p){
            mx=max(mx,j);
        }
        steps++;
        n-=(mx-'0');

    }
    cout<<steps<<en;

    return 0;
}