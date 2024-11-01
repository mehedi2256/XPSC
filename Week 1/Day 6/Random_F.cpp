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
    vector<bool> ar(26, 0);
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++)
        ar[st[i] - 'a'] = true;

    for (int i = 0; i < 26; i++)
    {
        if (!ar[i])
        {
            cout << char(i + 'a') << endl;
            return;
        }
    }
    cout << "None\n";
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