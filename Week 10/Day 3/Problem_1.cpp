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

bool bn(vi &v, int t, int l, int r)
{
    if (l > r)
        return false;
    int mid = (l + r) / 2;

    if (v[mid] == t)
        return true;
    if (t < v[mid])
        return bn(v, t, l, mid - 1);
    else
        return bn(v, t, mid + 1, r);
}

void mhsol()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v));
    while (k--)
    {
        int t;
        cin >> t;
        if (bn(v, t, 0, n - 1))
            cout << "YES\n";
        else
            cout << "NO\n";
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