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

int fun(int n)
{
    return 4 * (n - 2);
}
void solve()
{
    int n;
    cin >> n;
    cout << 0 << endl;
    for (int i = 2; i <= n; i++)
    {
        int total = (i * i * (i - 1) * (i + 1)) / 2;
        int attacking_ways = 4 * (i - 2) * (i - 1);
        cout << total - attacking_ways << endl;
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