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

bool isPossible(vi &v, int m, int k)
{
    int count = 1;
    int current_sum = 0;

    for (auto num : v)
    {
        current_sum += num;
        if (current_sum > m)
        {
            count++;
            current_sum = num;
        }
    }

    return count <= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    loop(i, 0, n) cin >> v[i];

    int lb = *max_element(all(v));
    int ub = accumulate(all(v), 0LL);
    int ans;
    while (lb <= ub)
    {
        int m = (lb + (ub - lb) / 2);
        if (isPossible(v, m, k))
        {
            ans = m;
            ub = m - 1;
        }
        else
        {
            lb = m + 1;
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