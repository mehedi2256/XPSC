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

void mhsol()
{
	int a, b;
	cin >> a >> b;
	if (b - a > 0)cout << b - a + 1 << endl;
	else cout << 0 << endl;
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