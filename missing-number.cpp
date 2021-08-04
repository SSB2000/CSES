// You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

// Input

// The first input line contains an integer n.

// The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

#include <iostream>

int main()
{
	long long n, s=0;
	std::cin>>n;
	for(int i=1;i<n;i++)
	{
		int a;
		std::cin>>a;
		s+=a;
	}
	std::cout<<(n*(n+1)/2)-s;
}