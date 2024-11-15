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
    int n , t;
    cin >> n;
    set<int> st;
    vi v(n);
    for (auto &it : v) cin >> it;
    for (int i = n - 1; i >= 0; i--) {
        if (st.count(v[i])) {
            cout << i + 1 << endl;
            return;
        }
        st.insert(v[i]);
    }
    cout << 0 << endl;

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