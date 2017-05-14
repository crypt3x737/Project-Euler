#include <bits/stdc++.h>

using namespace std;

long long int is_prime(long long int num);
long long int fast_exp(long long int i,long long int num);

int main()
{
	long long int n=600851475143,ans=0,max=0;
	
	for(long long int i=1;i<=n/2;i++)
	{
		if(n%i==0 && is_prime(n/i)!=0)
		{
			cout<<n/i<<endl;
			break;
		}
	}
	return 0;
}


long long int is_prime(long long int num)
{
	int count=0;
	for(long long int i=2;i<7;i++)
	{
		if( (i%num!=0)&&fast_exp(i,num-1)!=1)
		{
			count++;
			break;
		}
	}
	if(count==0)
	
		return num;
	else
		return 0;
}

//fast exponential
long long int fast_exp(long long int i,long long int num)
{	
	
	long long int pre=1;
	long long int post=i;
	long long int prime=num+1;
	while(num>1)
	{
		if(num%2==0)
		{
			post=post*post;
			post=post%prime;
			num=num/2;
		}
		else
		{
			pre=pre*post;
			pre=pre%prime;
			num=num-1;
		}
	}
	return (pre*post)%prime;
}


