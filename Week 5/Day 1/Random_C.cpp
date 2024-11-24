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

void solve()
{
    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != c[i] and b[i] != c[i])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    fast();
    sc();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}