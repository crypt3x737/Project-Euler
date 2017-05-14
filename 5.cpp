#include <bits/stdc++.h>

using namespace std;

bool is_divisible(long long int product);

int main()
{
	long long int ans,max=0,product=1;
	for(int i=1;i<=20;i++)
	{
		product=product*i;
	}
	for(long long int i=20;i<=product;i=i+20)
	{
		if(is_divisible(i)==true)
		{
			ans=i;
			i=product+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}

bool is_divisible(long long int product)
{
	bool ans=true;
	for(int i=1;i<=20;i++)
	{
		if(product%i!=0)
		{
			ans=false;
			i=21;
		}
	}
	return ans;
}
