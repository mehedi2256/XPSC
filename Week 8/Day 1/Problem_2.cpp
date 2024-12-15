#include <bits/stdc++.h>
#define ll long long
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
    ll n;
    cin >> n;
    int sbt = __lg(n);
    deque<ll> v;
    for (int i = 0; i <= sbt; i++) {
        if ((n >> i) & 1) {
            ll cnt = n - (1LL << i);
            if ( cnt > 0) {
                v.push_front(cnt);
            }
        }
    }

    v.push_back(n);
    cout << v.size() << endl;
    for (auto it : v) cout << it << " ";
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