#include<bits/stdc++.h>
#define ll long long
#define en "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
 
ll dp[100002000];
const ll mod=1e9+7;
 
signed main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll m;cin>>m;
ll target;cin>>target;
int a[m];f(i,0,m) cin>>a[i];

dp[0]=1;
for(int i=0;i<m;i++){
    for(int j=0;j<=target;j++){
        if(j>=a[i]){
            dp[j]+=dp[j-a[i]];
            dp[j]%=mod;
        }
    }
}
 
cout<<dp[target]<<en; 
 
   return 0;
 }
