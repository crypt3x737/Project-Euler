#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int sq_sum=0,sum_sq=0;
	for(int i=1;i<=100;i++)
	{
		sq_sum=sq_sum+i;
		sum_sq=sum_sq+pow(i,2);
	}
	cout<<pow(sq_sum,2)-sum_sq<<endl;
	return 0;
}


