#include <bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;

    int count = 1, s = 0, d = 0;
    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (count & 1)
        {
            if (v[i] > v[j])
                s += v[i++];
            else
                s += v[j--];
        }

        else
        {
            if (v[i] > v[j])
                d += v[i++];
            else
                d += v[j--];
        }
        count++;
    }

    cout << s << " " << d << endl;
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}