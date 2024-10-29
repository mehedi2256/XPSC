#include <bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void sc()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int64_t revbits(int64_t bit)
{
    int64_t n = (1u << 31) - 1;
    return (bit ^ n);
}

void solve()
{
    int t;
    cin >> t;
    map<string, int> mp;

    while (t--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            cout << "OK" << endl;
        else
            cout << s << mp[s] - 1 << endl;
    }
}
int main()
{
    fast();
    sc();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}