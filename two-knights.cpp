#include <bits/stdc++.h>

#define ll long long

using namespace std;
int main()
{
	int n;
	cin >> n;
	for (ll i = 1; i <= n; ++i)
	{
		ll totalPositions = (i * i) * (i * i - 1) / 2;
		ll knightAttackPosition = 2 * 2 * (i - 1) * (i - 2);
		cout << totalPositions - knightAttackPosition << endl;
	}
}


// Note that when we have two knights threatening each other, it actually forms either a 2×3 or 3×2 board. And for each of 2×3 and 3×2 boards, there are 2 ways of placing two knights so that they threaten each other. So, what we should do is to count how many 2×3 and 3×2 squares on n×n board. For general n, the answer is
// (n−1)(n−2)+(n−2)(n−1)=2(n−1)(n−2)
// And for each 2×3 and 3×2 board, there are 2 ways of placing the knights so that they threaten each other. Therefore, in total there are
// 2⋅2(n−1)(n−2)=4(n−1)(n−2)
// ways of placing two knights so that they threaten each other. So what you are looking for is
// n2(n2−1)2−4(n−1)(n−2)
// It is also worth mentioning that we are not over-counting because whenever we place two knights so that they threaten each other, either a 2×3 or 3×2 board must contain both of the knights. 