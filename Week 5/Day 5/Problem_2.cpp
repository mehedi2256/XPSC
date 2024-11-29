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
    vi v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum = sum ^ v[i];
    }
    int cnt = sum;

    for (int i = 0; i < n; i++) {
        int t = sum ^ v[i];
        cnt = min(cnt, t);
    }

    cout << cnt << endl;

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