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
    lli a, b, n, s;
    cin >> a >> b >> n >> s;

    if ((a * n) + b < s) {
        cout << "NO\n";
        return;
    }

    if (s % n <= b) cout << "YES\n";
    else cout << "NO\n";
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