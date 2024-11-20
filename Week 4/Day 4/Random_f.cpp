#include <bits/stdc++.h>
#define lli long long int
#define B begin()
#define E end()
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

void mhsol()
{
    lli a, b, c;
    cin >> a >> b >> c;
    if (a == 1) {
        cout << 1 << endl;
        return;
    }

    if (abs(b - c) + abs(c - 1) > abs(a - 1))
        cout << 1 << endl;
    else if (abs(b - c) + abs(c - 1) < abs(a - 1))
        cout << 2 << endl;
    else cout << 3 << endl;
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