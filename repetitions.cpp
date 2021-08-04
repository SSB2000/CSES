#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i = 0;
	int max = 0;
	int l = 0;
	while(i < s.length())
	{
		l++;
		if(s[i] != s[i+1])
		{
			if(l > max) max = l;
			l = 0;
		}
		i++;
	}
	cout<<max;
}
