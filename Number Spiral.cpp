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
    int x, y;
    cin >> x >> y;
    int maxi = max(x, y);
    int start = (maxi - 1) * (maxi - 1) + 1;
    int end = maxi * maxi;

    if (maxi & 1 and y >= x)
        cout << end - (x - 1);
    else if (maxi & 1 and x > y)
        cout << start + (y - 1);
    else if (maxi % 2 == 0 and y >= x)
        cout << start + (x - 1);
    else if (maxi % 2 == 0 and x > y)
        cout << end - (y - 1);
    cout << endl;
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}