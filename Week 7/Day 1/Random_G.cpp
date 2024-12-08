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
    int n, k;
    cin >> n >> k;
    vi v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;

    }

    vi vp;
    for (auto it : mp) {
        if (it.second >= k)
            vp.push_back(it.first);
    }
    if (vp.empty()) {
        cout << -1 << endl;
        return;
    }

    sort(all(vp));

    int fi = vp[0], la = vp[0], lu = vp[0], mx = 0;

    for (int i = 1; i < vp.size(); i++) {
        if (vp[i] - 1 == vp[i - 1]) {
            if (vp[i] - lu > mx) {
                mx = vp[i] - lu;
                la = vp[i];
                fi = lu;
            }
        }
        else lu = vp[i];
    }

    cout << fi << " " << la << endl;

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