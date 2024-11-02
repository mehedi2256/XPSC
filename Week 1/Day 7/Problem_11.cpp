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
    string st;
    cin >> st;
    bool isgot = false;
    cout << st[0];
    if (st.size() < 2)
    {
        if (st[0] != 'z')
            cout << char(st[0] + 1) << endl;
        else
            cout << 'y' << endl;
        return;
    }
    for (int i = 1; i < st.size(); i++)
    {
        if (st[i] == st[i - 1] and !isgot)
        {
            isgot = true;
            if (st[i] == 'a')
                cout << 'b', cout << st[i];
            else if (st[i] == 'z')
                cout << 'y', cout << st[i];
            else
                cout << char(st[i] + 1), cout << st[i];
        }
        else
            cout << st[i];
    }
    if (!isgot)
    {
        if (st[st.size() - 1] != 'z')
            cout << char(st[st.size() - 1] + 1);
        else
            cout << 'y';
    }
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