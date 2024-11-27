#include <bits/stdc++.h>
#define ll long long
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
    vector<vi>v(n, vi(n));
    int g = 1, h = n * n;
    bool cnt = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (cnt) v[i][j] = g++;
            else v[i][j] = h--;
            cnt ^= true;
        }
        if (i & 1) reverse(all(v[i]));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            if (j) cout << " ";
            cout << v[i][j];
        }
        cout << "\n";
    }
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