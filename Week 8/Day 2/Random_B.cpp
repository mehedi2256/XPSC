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
    for (auto &it : v) cin >> it;

    int cnt = 1e9;

    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = i - 1; j <= i + 1; j++) {
            if (j < 0 or j >= n) continue;
            ans = max(ans, abs(v[i] - v[j]));
        }
        cnt = min(cnt, ans);
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