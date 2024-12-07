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
    vi v(n);
    bool fr = false;
    for (auto &it : v)cin >> it;
    int i = 0;
    int cn;
    while (i < n - 1) {
        if (v[i] > v[i + 1]) {
            fr = true;
            cn = ++i;
            break;
        }
        i++;
    }
    while (i < n - 1) {
        if (v[i] > v[i + 1])
        {
            cout << "NO\n";
            return;
        }
        i++;
    }

    if (!fr) {
        cout << "YES\n";
        return;
    }

    if (v[n - 1] <= v[0])
        cout << "YES\n";
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