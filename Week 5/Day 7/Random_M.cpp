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
    int cnt = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        cnt = max(cnt, mp[v[i]]);
    }
    if (cnt == n) {
        cout << 0 << endl;
        return;
    }
    int t = 0 , k = cnt;
    while (cnt < n) {
        cnt = cnt * 2;
        t++;
    }
    cout << n - k + t << endl;

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