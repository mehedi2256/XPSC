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
    int n;
    cin >> n;
    int t = 3;
    map<string, int> mp;
    vector<vector<string>> v(3);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string a;
            cin >> a;
            v[i].push_back(a);
            mp[a]++;
        }
    }
    vi vp(3, 0);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mp[v[i][j]] == 3)
                continue;
            else if (mp[v[i][j]] == 2)
                vp[i]++;
            else if (mp[v[i][j]] == 1)
                vp[i] += 3;
        }
    }

    for (auto it : vp)
        cout << it << " ";
    cout << endl;
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
