#include<bits/stdc++.h>

using namespace std;

int main()
{
	unordered_map<long long int,long long int> collatz;
	long long int num = 1,chain = 0,longest = 0,ans;
	
	while (num != 1000000)
	{	
		long long int temp = num;
		chain = 1;
		while (temp != 1)
		{
			if (collatz.find(temp) == collatz.end())
			{
				if (temp % 2 == 0)
				{
					temp = temp / 2;
				}
				else
				{
					temp = (3 * temp) + 1;
				}
				chain++;
			}
			else
			{
				chain = chain + collatz[temp];
				temp = 1;
			}
		}
		
		collatz[num] = chain;
		
		if (longest < chain)
		{
			longest = chain;
			ans = num;
		}
		
		num++;
	}
	cout << "Answer - "<<ans << "         " << longest;	
	return 0;
}
