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

// final subproblem -> 
int main()
{
    return 0;
}