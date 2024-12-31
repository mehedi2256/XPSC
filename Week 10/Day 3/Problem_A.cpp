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
    ll n, k;
    cin >> n >> k;

    if (n == 1 and k > 1) {
        cout << -1 << endl;
        return;
    }
    vector<ll> v;
    ll cn = sqrt(n);
    bool chk = false;
    if (cn * cn == n)
        chk = true;
    for (ll i = 1; i <= cn; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (i == cn and chk)
                continue;
            v.push_back(n / i);
        }
    }

    if (v.size() < k) {
        cout << -1 << endl;
        return;
    }
    sort(all(v));
    cout << v[k - 1] << endl;

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