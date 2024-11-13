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
    int n, k;
    cin >> n >> k;
    vi v(n), vp(k);
    for (auto &it : v)cin >> it;
    for (auto &it : vp) cin >> it;

    int i = 0;
    int j = 0;
    while (j < k) {
        if (i < n and v[i] < vp[j])
            i++;
        else {
            cout << i << " ";
            j++;
        }
    }
    cout << endl;

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