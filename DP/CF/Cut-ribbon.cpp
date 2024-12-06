#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // dp[i] -> represents the maximum number of pieces of length i
    vector<int>dp(n+1,-1); // impossible to cut 
    dp[0] = 0; // 0 pieces of length 0

    for (int i = 1; i <= n; ++i) {
        
        if (i >= a && dp[i-a]!=-1) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i-b]!=-1) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i-c]!=-1) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    cout << dp[n] << endl;

    return 0;
}