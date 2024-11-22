#include <bits/stdc++.h>
#define lli long long
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
    lli n, t;
    cin >> n >> t;
    priority_queue<lli, vector<lli> , greater<lli>> pq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x + i + 1);
    }
    int cnt = 0;
    while (!pq.empty()) {
        lli h = pq.top();
        pq.pop();
        if (h > t) break;
        cnt++;
        t -= h;
    }
    cout << cnt << endl;
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