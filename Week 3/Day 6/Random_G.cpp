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
    string s, st;
    cin >> s >> st;
    if (s.back() == st.back())
    {
        if (s.size() == st.size())
            cout << '=';
        else if (s.back() == 'S')
            cout << (s.size() < st.size() ? '>' : '<');
        else
            cout << (s.size() < st.size() ? '<' : '>');
    }
    else
        cout << (s.back() < st.back() ? '>' : '<');
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