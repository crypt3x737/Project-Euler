#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string number[100];
	string ans="";
	string fin_ans="";
	long long int sum=0;
	long long int carry=0;
	ifstream fin;
	fin.open("prob13.txt");
	for(int i=0;i<100;i++)
		getline(fin,number[i]);
	for(int i=49;i>=0;i--)
	{
		sum=carry;
		for(int j=0;j<100;j++)
		{
			sum=sum+(number[j][i]-'0');
		}
		if(i!=0)
		{
			ans=ans+to_string(sum%10);
			carry=sum/10;
		}
		else
		{
			fin_ans=to_string(sum);			
			reverse(ans.begin(),ans.end());
			fin_ans=fin_ans+ans;
		}
	}
	for(int i=0;i<10;i++)
	cout<<fin_ans[i];
	cout<<endl;
	
	return 0;
}
