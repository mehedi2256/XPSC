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
    int n, q;
    cin >> n >> q;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    reverse(all(v));
    set<int> st;
    vi vp(n);
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
        vp[i] = st.size();
    }
    reverse(all(vp));

    while (q--)
    {
        int t;
        cin >> t;
        cout << vp[t - 1] << endl;
    }
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