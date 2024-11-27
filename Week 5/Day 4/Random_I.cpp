#include <bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define vi vector<ll>
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
    for (auto &it : v) cin >> it;
    sort(all(v));
    ll mn = 0 , cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] & 1) mn = max(mn, v[i]);
        else cnt++;
    }
    bool m = false;
    if (cnt == n) cout << 0 << endl;
    else {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                if (v[i] < mn)
                    mn = mn + v[i];
                else m = true;
            }

        }
        if (m) cnt++;
        cout << cnt << endl;
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