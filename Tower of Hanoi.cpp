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

void toh(int n, vector<pair<int, int>> &vp, int l, int m, int r)
{
    if (n > 0)
    {
        toh(n - 1, vp, l, r, m);
        vp.push_back({l, r});
        toh(n - 1, vp, m, l, r);
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    toh(n, vp, 1, 2, 3);
    cout << vp.size() << endl;
    for (auto &it : vp)
    {
        cout << it.first << " " << it.second << endl;
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