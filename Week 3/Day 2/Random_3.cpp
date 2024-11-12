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
    int n;
    cin >> n;
    vi a(n);
    for (auto &it : a) cin >> it;
    sort(all(a));

    if (n <= 1) {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 0 or a[i] == a[i + 1])
            continue;
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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