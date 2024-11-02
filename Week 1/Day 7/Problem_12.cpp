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
    string s;
    cin >> s;
    string r = s;
    sort(r.begin(), r.end());
    r.resize(unique(r.begin(), r.end()) - r.begin());
    map<char, char> id;
    for (int i = 0; i < r.size(); ++i)
        id[r[i]] = r[int(r.size()) - i - 1];
    for (int i = 0; i < n; ++i)
        cout << id[s[i]];
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