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
    int a, b, c ;
    cin >> a >> b >> c;

    double sum = a * 1.0 + (b * 0.5) + (4 - (a + b + c)) * 1.0;

    if (sum > 2)cout << "YES\n";
    else cout << "NO\n";
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