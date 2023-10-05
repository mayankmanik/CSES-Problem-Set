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
    string s;
    cin >> s;
    int n = s.size();
    if (n == 1)
    {
        cout << s;
        return;
    }
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (auto it : s)
        freq[it - 'A']++;
    int odd = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] & 1)
            odd++;
    if (odd > 1)
        cout << "NO SOLUTION";
    else
    {
        odd = 1e9;
        string ans(n, '.');
        int st = 0, end = n - 1;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 == 0)
            {
                while (freq[i])
                {
                    ans[st++] = i + 'A';
                    ans[end--] = i + 'A';
                    freq[i] -= 2;
                }
            }
            else
            {
                odd = i;
            }
        }
        if (odd != 1e9)
        {
            while (freq[odd]--)
            {
                ans[st++] = odd + 'A';
            }
        }

        cout << ans;
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