//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/guess-permutation-2-be0b2b90/

#include<bits/stdc++.h>
using namespace std;
 
int permutation(int n)
{
	long long a,j,sum1=0,sum2=0;
		int flag=1;
		for(j=0;j<n;j++)
		{
			cin>>a;
			sum1+=a;
			sum2+=j+1;
			if(sum1<sum2)
				flag=0;
		}
		if(sum1==sum2 && flag==1)
			return 1;
		else
			return 2;
}
 
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long n;
		cin>>n;
		int out=permutation(n);
		if(out==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}