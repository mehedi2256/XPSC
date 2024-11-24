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
    if (n & 1) {
        cout << "NO\n";
        return;
    }
    string st = "";
    for (int i = 0; i < n; i += 2) {
        int t = i % 26;
        st += char(t + 'A');
        st += char(t + 'A');

    }
    cout << "YES\n" << st << endl;
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