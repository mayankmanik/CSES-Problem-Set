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
    int n;
    cin >> n;

    vi v(n);
    loop(i, 0, n)
    {
        v[i] = i + 1;
    }

    while (v.size() > 1)
    {
        vi temp;
        loop(i, 0, (int)v.size())
        {
            if (i % 2)
            {
                cout << v[i] << " ";
            }
            else
            {
                temp.pb(v[i]);
            }
        }
        if (v.size() % 2 == 0)
        {
            v = temp;
        }
        else
        {
            int st = temp.back();
            temp.pop_back();
            v.clear();
            v.pb(st);
            for (auto it : temp)
                v.pb(it);
        }
    }
    cout << v[0];
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}