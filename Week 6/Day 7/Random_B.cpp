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
    int a, b;
    cin >> a >> b;
    int cn = ceil(b * 1.0 / 2);
    int cnt = ceil(((a + (b * 4)) * 1.0) / 15);
    cout << max(cn, cnt) << endl;
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