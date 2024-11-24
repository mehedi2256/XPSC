#include <bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    vector<char> st;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> count(26);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (v[i] == count[j])
            {
                count[j]++;
                st.push_back(97 + j);
                break;
            }
        }
    }

    for (char it : st)
        cout << it;
    cout << endl;
}
int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}