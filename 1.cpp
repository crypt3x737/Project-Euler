#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int sum=0;
	for(int i=3;i<1000;i++)
	{
		if(i%5==0)
			sum=sum+i;
		else if(i%3==0)
			sum=sum+i;
	}
	cout<<sum<<endl;
}
