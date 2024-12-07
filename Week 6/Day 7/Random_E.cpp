#include <bits/stdc++.h>
#define ll long long
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
    int n;
    cin >> n;

    bool f = false;
    ll t, cnt = 0;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if ( i == n) continue;
        if (t > 0 and !f)
            f = true;
        if (t == 0 and f)
            cnt++;
        cnt += t;
    }
    cout << cnt << endl;
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