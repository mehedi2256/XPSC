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
    string st;
    cin >> st;
    string s = "";
    int i = n - 1;
    while (i >= 0) {
        if (st[i] == '0') {
            int t = st[i - 1] - '0';
            int h = st[i - 2] - '0';
            s += 'a' + (t + h * 10 - 1);
            i -= 3;
        }
        else {
            int t = st[i] - '0';
            s += 'a' + (t - 1);
            i--;
        }
    }
    reverse(all(s));
    cout << s << endl;
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