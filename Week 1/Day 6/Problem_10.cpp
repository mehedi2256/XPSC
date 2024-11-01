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
    cin.ignore();
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        if (mp[st] == 0)
        {
            mp[st]++;
            cout << "NO\n";
        }
        else
            cout << "YES\n";
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