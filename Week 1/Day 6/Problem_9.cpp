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
    cin.ignore();
    map<string, int> mp;
    stack<string> q;
    while (n--)
    {
        string st;
        cin >> st;
        mp[st]++;
        q.push(st);
    }
    while (!q.empty())
    {
        string st = q.top();
        q.pop();
        if (mp[st])
        {
            cout << st << endl;
            mp[st] = 0;
        }
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