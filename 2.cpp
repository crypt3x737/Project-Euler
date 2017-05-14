#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a=1,b=2,sum=2,c;
	do
	{
		c=a + b;
		if(c%2==0)
			sum=sum+c;
			a=b;
			b=c;	
	}while(c<=4000000);

	cout<<sum<<endl;
}
