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
    map<string, string> par, child;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (par.find(a) != par.end())
        {
            child[par[a]] = b;
            par[b] = par[a];
        }
        else
        {
            child[a] = b;
            par[b] = a;
        }
    }
    cout << child.size() << endl;
    for (auto it : child)
        cout << it.first << " " << it.second << endl;
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