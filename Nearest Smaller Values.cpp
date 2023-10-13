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
    loop(i, 0, n) cin >> v[i];

    stack<int> st;
    st.push(0);
    vi ans;
    ans.pb(0);
    for (int i = 1; i < n; i++)
    {
        if (v[st.top()] < v[i])
            ans.pb(st.top() + 1);
        else
        {
            while (!st.empty() and v[st.top()] >= v[i])
            {
                st.pop();
            }
            if (st.empty())
                ans.pb(0);
            else
                ans.pb(st.top() + 1);
        }
        st.push(i);
    }
    print(ans);
}

signed main()
{
    NeedForSpeed;
    int tt = 1;
    // cin >> tt;
    loop(i, 0, tt) solve();
    return 0;
}