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
    int n;
    cin >> n;
    int total = (n * (n + 1)) / 2;
    if (total & 1)
        cout << "NO";
    else
    {
        cout << "YES\n";
        vi v(n);
        loop(i, 0, n) v[i] = i + 1;
        int cnt = 0, sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (sum + v[i] <= total / 2)
            {
                cnt++;
                sum += v[i];
                v[i] *= -1;
            }
        }
        cout << cnt << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
                cout << abs(v[i]) << " ";
        }
        cout << endl;
        cout << n - cnt << endl;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
                cout << v[i] << " ";
        }
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