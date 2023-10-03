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

void fun(int i, int &ans, vector<int> v, int total, int sum)
{
    if (i < 0)
    {
        ans = min(ans, abs(2 * sum - total));
        return;
    }
    fun(i - 1, ans, v, total, sum);
    fun(i - 1, ans, v, total, sum + v[i]);
}
void solve()
{
    int n;
    cin >> n;
    vi v(n, 0);
    loop(i, 0, n) cin >> v[i];
    int total = 0;
    for (auto it : v)
        total += it;
    int ans = 1e15;
    fun(n - 1, ans, v, total, 0);
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