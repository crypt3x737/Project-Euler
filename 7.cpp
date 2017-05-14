#include <bits/stdc++.h>

using namespace std;

long long int is_prime(long long int num);

int main()
{
	int prime=1;
	long long int ans;
	long long int num=3;
	do
	{
		if(is_prime(num)==0)
		{
			ans=num;
			prime++;
		}
		num++;
	}while(prime!=10001);
	cout<<ans<<endl;
	return 0;
	
}

long long int is_prime(long long int num)
{
	int count=0;
	for(long long int i=2;i<sqrt(num)+1;i++)
	{
		if(num%i==0)
		count++;
	}
	return count;
}
