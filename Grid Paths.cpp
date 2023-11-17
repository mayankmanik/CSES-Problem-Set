#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define all(x) x.begin(), x.end()
#define NeedForSpeed ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define inf INT_MAX
#define ninf INT_MIN
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vvl vector<vector<long long>>
#define pll pair<long long, long long>
#define mpll map<long long, long long>
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define loop(i, a, b) for (long long i = a; i < b; i++)
#define print(v)       \
    for (auto &it : v) \
    cout << it << " "
#define printPair(v)   \
    for (auto &it : v) \
    cout << it.first << " -> " << it.second << endl

void solve()
{
    int n;
    cin >> n;

    string v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vvl dp(n, vi(n));
    // dp[i][j] -> no of ways to go from (i,j) to (n-1,n-1)
    if (v[n - 1][n - 1] == '.')
        dp[n - 1][n - 1] = 1;
    else
        dp[n - 1][n - 1] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == n - 1 and j == n - 1)
                continue;
            if (v[i][j] == '*')
                dp[i][j] = 0;
            else
            {
                int down = (j + 1 < n) ? dp[i][j + 1] : 0;
                int right = (i + 1 < n) ? dp[i + 1][j] : 0;
                dp[i][j] = (down + right) % mod;
            }
        }
    }
    cout << dp[0][0];
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}