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
    int s, t;
    cin >> s >> t;
    lli cnt = 0;
    for (int i = 0; i <= s; i++)
        for (int j = 0; i + j <= s; j++)
            for (int k = 0; i + j + k <= s; k++)
                if (i * j * k <= t)
                    cnt++;
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