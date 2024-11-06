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
    string st;
    cin >> st;
    map<char, int> mp;
    for (char it : st)
        mp[it]++;
    int cnt = 0;
    for (auto it : mp)
    {
        if (it.second & 1)
            cnt++;
    }

    if (cnt <= m + 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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