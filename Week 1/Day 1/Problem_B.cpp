#include <bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int min = 0, max = 0;

    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
        {
            min = i;
            break;
        }

    for (int i = n - 1; i >= 0; i--)
        if (s[i] == 'B')
        {
            max = i;
            break;
        }

    cout << max - min + 1 << endl;
}
int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}