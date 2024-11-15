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
    int a, b, c;
    cin >> a >> b >> c;
    vector<long long> v(a), vp(b);

    for (auto &it : v) cin >> it;
    for (auto &it : vp) cin >> it;

    sort(all(v), greater<int>());
    sort(all(vp), greater<int>());

    ll cnt = 0;
    for (int i = 0; i < min(a, b); i++) {
        cnt += min(v[i], vp[i] * c);
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