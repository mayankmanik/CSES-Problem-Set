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
    int n, x;
    cin >> n >> x;
    vi v(n), t(n);
    loop(i, 0, n)
    {
        cin >> v[i];
        t[i] = v[i];
    }
    sort(all(v));
    bool flag = true;
    vi ans;
    loop(i, 0, n)
    {
        int l = i + 1, h = n - 1;
        while (l < h)
        {
            if (v[l] + v[h] == x - v[i])
            {
                ans.pb(v[l]);
                ans.pb(v[h]);
                ans.pb(v[i]);
                flag = false;
                break;
            }
            else if (v[l] + v[h] > x - v[i])
                h--;
            else
                l++;
        }
        if (!flag)
            break;
    }
    if (flag)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        bool f1 = true, f2 = true, f3 = true;
        loop(i, 0, n)
        {
            if (t[i] == ans[0] and f1)
            {
                f1 = !f1;
                ans[0] = i + 1;
                t[i] = -t[i];
            }
            if (t[i] == ans[1] and f2)
            {
                f2 = !f2;
                t[i] = -t[i];
                ans[1] = i + 1;
            }
            if (t[i] == ans[2] and f3)
            {
                f3 = !f3;
                t[i] = -t[i];
                ans[2] = i + 1;
            }
        }
        sort(all(ans));
        print(ans);
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