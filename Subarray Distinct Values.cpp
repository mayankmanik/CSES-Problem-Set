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
    int n, k;
    cin >> n >> k;
    vi v(n);
    loop(i, 0, n) cin >> v[i];

    int ans = 0;
    map<int, int> mp;
    int i = 0, j = 0;
    while (j < n)
    {
        mp[v[j]]++;
        if (mp.size() <= k)
            ans += (j - i + 1);
        else
        {
            while (mp.size() > k)
            {
                mp[v[i]]--;
                if (mp[v[i]] == 0)
                    mp.erase(v[i]);
                i++;
            }
            if (mp.size() <= k)
                ans += (j - i + 1);
        }
        j++;
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