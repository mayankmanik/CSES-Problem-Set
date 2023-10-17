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

bool isPossible(int m, vi &v, int t)
{
    int cnt = 0;
    loop(i, 0, v.size())
    {
        cnt += m / v[i];
    }
    return cnt >= t;
}
void solve()
{
    int n, t;
    cin >> n >> t;
    vi v(n);
    loop(i, 0, n) cin >> v[i];

    int ans = 0;
    sort(all(v));

    int l = v[0], h = v[0] * t;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (isPossible(m, v, t))
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans;
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}