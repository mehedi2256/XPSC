#include <bits/stdc++.h>
#define lli long long int
#define B begin()
#define E end()
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

void mhsol()
{
    int n;
    cin >> n;
    int t = (n * (n - 1)) / 2;
    vi v(t);
    for (auto &it : v)
        cin >> it;

    sort(all(v));
    n--;
    for (int i = 0; i < t; i += n--)
        cout << v[i] << " ";
    cout << 1000000000 << endl;
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