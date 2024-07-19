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

int dp[10001][10001];
int mod=1e9+7;

int main()
{
    ll n;cin>>n;
    char a[n][n];
    f(i,0,n){
        f(j,0,n) cin>>a[i][j];
    }

    f(i,0,n){
        f(j,0,n){
            if(i==0 && j==0) dp[i][j]=1;
            else if(a[i][j]=='*') dp[i][j]=0;
            else{
                dp[i][j]=0;
                ll op1=0,op2=0;
                if(i>0) op1=dp[i-1][j];
                if(j>0) op2=dp[i][j-1];
                dp[i][j]=op1+op2;
            }
            dp[i][j]%=mod;
            
        }
    }
    
    cout<<dp[n-1][n-1]<<en;

    return 0;
}