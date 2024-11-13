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
    stack<string> stk;
    set<string> st;

    string s;
    while (n--) {
        cin >> s;
        stk.push(s);
    }

    while (!stk.empty()) {
        string ts = stk.top();
        stk.pop();
        if (st.count(ts))
            continue;
        st.insert(ts);
        int n = ts.size();
        cout << ts[n - 2] << ts[n - 1];
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