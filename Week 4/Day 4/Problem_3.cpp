#include <bits/stdc++.h>
#define lli long long int
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
    lli n, s;
    cin >> n >> s;
    vi v(n);
    for (auto &it : v)cin >> it;
    lli ans = 0 , sum = 0;
    int l = 0, r = 0;
    while (r < n) {
        sum += v[r];
        if (sum <= s)
            ans += r - l + 1;
        else {
            while (sum > s)
                sum -= v[l++];
            if (sum <= s)
                ans += r - l + 1;
        }
        r++;
    }
    cout << ans << endl;
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