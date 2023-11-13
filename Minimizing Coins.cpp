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
    int n, x;
    cin >> n >> x;
    vi v(n);
    loop(i, 0, n) cin >> v[i];

    vi dp(x + 1);
    // dp[i] -> minimum no of coins to get sum of i
    dp[0] = 0;

    for (int i = 1; i <= x; i++)
    {
        int mini = 1e9;
        for (int j = 0; j < n; j++)
        {
            if (i >= v[j])
                mini = min(mini, dp[i - v[j]]);
        }
        dp[i] = 1 + mini;
    }
    cout << (dp[x] < 1e9 ? dp[x] : -1);
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}