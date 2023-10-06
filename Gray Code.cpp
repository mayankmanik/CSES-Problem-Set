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

string fun(int i, int n)
{
    string ans(n, '0');
    if (i == 0)
        return ans;
    int j = n - 1;
    while (i > 1)
    {
        char ch = (i % 2) + '0';
        ans[j--] = ch;
        i /= 2;
    }
    if (i == 1)
    {
        ans[j] = '1';
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vi ans;
    ans.pb(0);
    int bit = 0;
    while (bit < n)
    {
        int sz = ans.size();
        for (int i = sz - 1; i >= 0; i--)
        {
            int last = ans[i];
            int shift = (1 << bit);
            ans.pb(last | shift);
        }
        bit++;
    }
    for (auto &i : ans)
    {
        cout << fun(i, n) << "\n";
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