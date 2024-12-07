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
    int n;
    cin >> n;

    int cnt = 0;
    priority_queue<int> pq;
    int t;
    cin >> t;
    if (t == 0)
        cnt++;
    ll sum = t;
    pq.push(t);
    for (int i = 1; i < n; i++) {
        cin >> t;
        pq.push(t);
        sum += t;
        if (sum - pq.top() == pq.top())
            cnt++;
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