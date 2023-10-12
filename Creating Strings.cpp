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

void fun(set<string> &st, string s, int ind)
{
    if (ind == s.size())
    {
        st.insert(s);
        return;
    }
    for (int i = ind; i < s.size(); i++)
    {
        swap(s[ind], s[i]);
        fun(st, s, ind + 1);
        swap(s[ind], s[i]);
    }
}

void solve()
{
    string s;
    cin >> s;
    set<string> st;
    fun(st, s, 0);
    cout << st.size() << endl;
    for (auto &it : st)
    {
        cout << it << endl;
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