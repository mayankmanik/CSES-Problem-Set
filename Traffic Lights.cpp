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
    int x, n;
    cin >> x >> n;
    set<int> pos;
    multiset<int> len;
    pos.insert(0);
    pos.insert(x);
    len.insert(x - 0);
    loop(i, 0, n)
    {
        int no;
        cin >> no;
        pos.insert(no);
        auto it = pos.find(no);
        int nextVal = *next(it);
        int prevVal = *prev(it);
        len.erase(len.find(nextVal - prevVal));
        len.insert(nextVal - no);
        len.insert(no - prevVal);
        cout << *len.rbegin() << " ";
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