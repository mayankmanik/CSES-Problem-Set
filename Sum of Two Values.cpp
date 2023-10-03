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
    map<int, int> mp;
    loop(i, 0, n) mp[v[i]] = i;

    for (int i = 0; i < n; i++)
    {
        if (mp.find(x - v[i]) != mp.end() and mp[x - v[i]] != i)
        {
            cout << i + 1 << " " << mp[x - v[i]] + 1;
            return;
        }
    }

    cout << "IMPOSSIBLE";
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}