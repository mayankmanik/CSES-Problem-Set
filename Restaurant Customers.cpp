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
    int n;
    cin >> n;
    vi a, d;
    loop(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        a.pb(x);
        d.pb(y);
    }
    sort(all(a));
    sort(all(d));
    int ans = 0, curr = 1;
    int i = 1, j = 0;
    while (i < n and j < n)
    {
        if (a[i] < d[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        ans = max(ans, curr);
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