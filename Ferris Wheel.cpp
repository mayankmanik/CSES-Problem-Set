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
#define printPair(v)   \
    for (auto &it : v) \
    cout << it.first << " -> " << it.second << endl

void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n);
    loop(i, 0, n) cin >> v[i];

    int ans = 0;
    sort(begin(v), end(v));
    int i = 0, j = n - 1;
    vi vis(n, 0);
    while (i <= j)
    {
        if (v[i] + v[j] <= x)
        {
            vis[i] = 1;
            vis[j] = 1;
            ans++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            ans++;
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