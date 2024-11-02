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
    vi v;
    lli sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t & 1)
            cnt++, v.push_back(t);
        else
            sum += t;
    }
    sort(all(v));
    if (cnt & 1)
        v[0] = 0;
    for (int it : v)
        sum += it;
    cout << sum << endl;
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