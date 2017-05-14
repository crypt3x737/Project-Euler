#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int sum=1,value=1,factors=0;
	while(factors<=500)
	{
		value++;
		sum=sum+value;
		factors=2;
		//really fast way of doing factorization,beats hash table
		for(long long int i=2;i<=(sum/2)+1;i++)
		{
			if(sum%i==0)
			{
				int a=i;
				int b=sum/i;
				if(a<=b)
				{
					factors=factors+2;
				}
				else
				{
					break;
				}
			}
		}
		//stupid way of doing it, inefficient
		/*for(long long int i=(floor(sum/2))+1;i>=2;i--)
		{
			 if(sum%i==0)
			 {
				if(fact.find(i)!=fact.end())
				{
					factors=factors+fact[i]-1;//1 will be counted twice
					i=1;
				}
				else
					factors++;
			  }
		}*/

	}
	cout<<"Sum - "<<sum<<endl;
	return 0;
}
