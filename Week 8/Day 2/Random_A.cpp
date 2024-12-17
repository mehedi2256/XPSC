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
    string st;
    cin >> st;

    int cnt = 0, cn = 0;
    for (char it : st) {
        if (it == '0') cnt++;
        else cn++;
    }

    int t = min(cn, cnt);
    if (t & 1)
        cout << "Zlatan\n";
    else cout << "Ramos\n";

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