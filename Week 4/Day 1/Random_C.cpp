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
    cin.ignore();
    string st;
    cin >> st;

    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (st[i] != st[i + 1]) cnt++;
    }

    cout << ceil(cnt * 1.0 / 2) << endl;

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