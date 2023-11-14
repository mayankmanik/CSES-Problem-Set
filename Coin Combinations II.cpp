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

    // space complexity -> O(x)

    vi nextState(x + 1, 0);
    nextState[0] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        vi currentState(x + 1, 0);
        currentState[0] = 1;
        for (int j = 1; j <= x; j++)
        {
            int skipping = nextState[j];
            int picking = 0;
            if (v[i] <= j)
                picking = currentState[j - v[i]];

            currentState[j] = (skipping + picking) % mod;
        }
        nextState = currentState;
    }
    cout << nextState[x];
    /*
        // space complexity -> O(n*x)

        vvl dp(n + 1, vi(x + 1));
        // dp[i][k] -> no of ways to make sum k by skipping all coins from c0 to ci-1 and using(can be taken or skipped) coins from ci to cn-1
        loop(i, 0, n)
        {
            dp[i][0] = 1;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 1; j <= x; j++)
            {
                int skipping = dp[i + 1][j];
                int picking = 0;
                if (j >= v[i])
                    picking = dp[i][j - v[i]];
                dp[i][j] = (picking + skipping) % mod;
            }
        }
        cout << dp[0][x];
    */
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}