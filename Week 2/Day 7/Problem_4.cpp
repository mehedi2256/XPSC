#include <bits/stdc++.h>
#define lli long long int
#define B begin()
#define E end()
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

void mhsol()
{
    int n, q;
    cin >> n >> q;
    map<int, pi> mp;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (mp.find(t) == mp.end())
            mp[t].first = i, mp[t].second = i;
        else
            mp[t].second = i;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (mp.find(a) == mp.end() or mp.find(b) == mp.end())
        {
            cout << "NO\n";
            continue;
        }
        if (mp[a].first < mp[b].second)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        mhsol();
    return 0;
}