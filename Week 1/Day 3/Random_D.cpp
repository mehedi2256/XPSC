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
    if (n == 0)
    {
        cout << "0000" << endl;
        return;
    }

    int k = n, cnt = 0;
    while (k > 0)
    {
        cnt++;
        k /= 10;
    }
    for (int i = 0; i < (4 - cnt); i++)
        cout << "0";
    cout << n << endl;
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