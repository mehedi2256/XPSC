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
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    map<string, int> mk;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[b] = a;
        mk[b]++;
    }
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (!b.empty() && b.back() == ';')
        {
            b.pop_back();
        }
        if (mk[b])
            cout << a << " " << b << "; #" << mp[b] << endl;
    }
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        mhsol();
    return 0;
}