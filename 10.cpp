#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int sum = 2;
	for (long long int i = 3; i < 2000000; i = i + 2)
	{
		int count = 0;
		for (long long int j = 2;j<sqrt(i)+1; j++)
		{
			if (i%j == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			sum=sum+i;
		}

	}
	cout <<"SUM - " <<sum << endl;
	return 0;
}
