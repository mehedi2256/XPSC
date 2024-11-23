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
    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (auto &it : v) cin >> it;

    multiset<long long> ml;
    int l = 0, r = 0;
    long long cnt = 0;
    while (r < n) {
        ml.insert(v[r]);
        long long mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k) {
            cnt += r - l + 1;
        }
        else {
            while (l <= r) {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k) break;
                ml.erase(ml.find(v[l++]));
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k) {
                cnt += r - l + 1;
            }
        }
        r++;
    }
    cout << cnt << endl;
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