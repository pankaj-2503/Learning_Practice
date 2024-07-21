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

// dp[i][x] -> no. of ways to fill the prefix till index i such that the ith element is x
// if(arr[i]!=0 && arr[i]!=x) dp[i][x]=0;

// transition ->  dp[i][x]=dp[i-1][x-1]+ dp[i-1][x]+ dp[i-1][x+1];
// base case:
 // if(arr[0]==0) dp[i][j]=0; we can't fill 
    // else dp[i][j]=0 but dp[0][arr[0]]=1;

// final subproblem -> dp[n][0]+dp[n][1]+..+dp[n][x];
int mod=1e9+7;
bool valid(int x,int m){
    return x>=1 && x<=m;
}
int main()
{
    ll n,m;cin>>n>>m;
    vi a(n);
    f(i,0,n) cin>>a[i];
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    // base case
    for(int i=1;i<=m;i++){
        if(a[0]==0 || a[0]==i){
            dp[1][i]=1;
        }
    }
    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]!=0 && a[i-1]!=j){
                dp[i][j]=0;continue;
            }
            for(int prev=j-1;prev<=j+1;prev++){
                if(!valid(prev,m)) continue;
                dp[i][j]=(dp[i][j]+dp[i-1][prev])%mod;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=m;i++){
        ans+=dp[n][i];
        ans%=mod;
    }
    cout<<ans<<en;

    return 0;
}