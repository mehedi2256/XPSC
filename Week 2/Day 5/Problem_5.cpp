#include <bits/stdc++.h>
#define lli long long int
#define B begin()
#define E end()
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pair<int, int>>
#define all(x) x.B, x.E
#define fast() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

const int N = 5 * 1e5 + 1;

class cmp {
public:
	bool operator()(pi &a, pi &b) {
		if (a.first == b.first)
			return a.second > b.second;
		return a.first < b.first;
	}
};

void mhsol()
{
	int n;
	cin >> n;
	vector<bool> vp(N, false);
	queue<pi> q;
	priority_queue<pi, vector<pi>, cmp > pq;
	int cnt = 0;
	while (n--) {
		int a, b;
		cin >> a;
		if (a == 1) {
			cin >> b;
			cnt++;
			q.push({b, cnt});
			pq.push({b, cnt});
		}
		else if (a == 2) {
			int k = q.front().second;
			q.pop();
			while (vp[k]) {
				k = q.front().second;
				q.pop();
			}
			vp[k] = true;
			cout << k << " ";
		}
		else {
			int k = pq.top().second;
			pq.pop();
			while (vp[k]) {
				k = pq.top().second;
				pq.pop();
			}
			vp[k] = true;
			cout << k << " ";
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