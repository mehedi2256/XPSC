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

map<ll, bool> mp;
int N = 1e6 + 10;

vector<bool> v(N, false);

void prime() {
    for (int i = 2; i <= N; i++) {
        if (v[i]) continue;
        int t = i + i;
        while (t <= N) {
            v[t] = true;
            t += i;
        }
    }

    for (ll i = 2; i <= N; i++) {
        if (!v[i])
            mp[i * i] = true;
    }
}

void mhsol()
{
    ll n;
    cin >> n;

    if (mp[n])
        cout << "YES\n";
    else cout << "NO\n";

}
int main()
{
    fast();
    prime();
    int t = 1;
    cin >> t;
    while (t--)
        mhsol();
    return 0;
}