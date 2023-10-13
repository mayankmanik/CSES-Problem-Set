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
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    loop(i, 0, n)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    vi b(n, 0);
    loop(i, 0, m) cin >> b[i];

    for (int i = 0; i < m; i++)
    {
        auto it = ms.upper_bound(b[i]);
        if (it == ms.begin())
            cout << -1 << endl;
        else
        {
            it = prev(it);
            cout << *it << endl;
            ms.erase(it);
        }
    }
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}