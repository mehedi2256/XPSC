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
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t <= 0)
            continue;
        cin.ignore();

        string st;
        cin >> st;
        for (int j = 0; j < t; j++)
        {
            if (st[j] == 'U')
                v[i]--;
            else
                v[i]++;
            if (v[i] < 0)
                v[i] += 10;
            if (v[i] > 9)
                v[i] -= 10;
        }
    }
    for (int it : v)
        cout << it << " ";
    cout << endl;
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
