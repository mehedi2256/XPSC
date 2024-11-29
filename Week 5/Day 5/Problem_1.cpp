#include <bits/stdc++.h>
#define ll long long
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = n; i >= 1; i--){
            if (i != n)
                cout << " ";
            cout << i;
        }
        cout << endl;
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