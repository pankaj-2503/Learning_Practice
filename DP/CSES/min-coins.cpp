// Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define en endl
#define all(x) x.begin(), x.end()
#define f(i, from, to) for (ll i = from; i < to; i++)
#define fe(i, from, to) for (ll i = from; i <= to; i++)
#define fre(i, from, to) for (ll i = from; i >= to; i--)
#define fr(i, from, to) for (ll i = from; i > to; i--)
#define pb(x) push_back(x)
#define mx(v) *max_element(v.begin(), v.end())
#define mn(v) *min_element(v.begin(), v.end())
#define vi vector<ll>
#define vip vector<pair<ll, ll>>

int mod = 1e9 + 7;

int dp[1001001];
void solve()
{
    ll n, x;
    cin >> n >> x;
    vi a(n);
    f(i, 0, n) cin >> a[i];

    // Here dp[i] represents min. no. of cons required to make sum i
    // to make sum 0 i need 0 coins from coins array

    for (int sum = 0; sum <= x; sum++)
    {

        if (sum == 0)
        {
            dp[sum] = 0;
            continue;
        }
        dp[sum] = 1e9;
        for (int index = 0; index < n; index++)
        {
            if (sum >= a[index])
            {
                dp[sum] = min(dp[sum - a[index]] + 1, dp[sum]);
            }
        }
    }
    if (dp[x] == 1e9)
        cout << -1 << en;
    else
    cout << dp[x] << en;
}

int main()
{
    solve();
    return 0;
}