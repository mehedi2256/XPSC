#include <bits/stdc++.h>
#define ll long long
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

    int count = 0, t, m = n;
    while (m--)
    {
        cin >> t;
        count = count ^ t;
    }
    if (n & 1)
        cout << count << endl;
    else
    {
        if (count == 0)
            cout << 2 << endl;
        else
            cout << -1 << endl;
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