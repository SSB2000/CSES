#include <iostream>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin >> t;
	while(t-- > 0)
	{
		ll x, y;
		cin >> x >> y;
		ll ans = 0;
		if (x == 1 && y == 1) cout << 1 << endl;
		int z = max(x, y);
		int z2 = (z - 1)*(z - 1);
		if (x == z)
		{
			ans = z2 + y;
		}
		else 
		{
			ans = z2 + (2 * z) - y;
		}
		cout << ans << endl;
	}
}