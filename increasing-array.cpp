#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	int mx = 0; 
	ll ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		mx = max(a, mx);
		ans += (mx - a);
	}
	cout << ans;
}