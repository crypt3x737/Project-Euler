#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int ans,max=0;
	for(int i=999;i>99;i--)
	{
		for(int j=999;j>99;j--)
		{
			long long int product=i*j;
			string s=to_string(product);
			string orig=s;
			reverse(s.begin(),s.end());
			if(s.compare(orig)==0)
			{
				ans=product;
				if(max<ans)
				max=ans;
			}
		}
	}
	cout<<max<<endl;
	return 0;
}
