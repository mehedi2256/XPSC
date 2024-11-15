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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        mp[t]++;
    }
    lli cnt = 0;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cnt += mp[t];
    }
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