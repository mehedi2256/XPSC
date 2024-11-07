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
    vi v(n);
    for (auto &it : v)
        cin >> it;
    int i = 0, j = n - 1;
    int mini = 1, mx = n;
    while (i <= j)
    {
        if (v[i] == mini)
            i++, mini++;
        else if (v[i] == mx)
            i++, mx--;
        else if (v[j] == mini)
            j--, mini++;
        else if (v[j] == mx)
            j--, mx--;
        else
            break;
    }
    if (i <= j)
        cout << i + 1 << " " << j + 1 << endl;
    else
        cout << -1 << endl;
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