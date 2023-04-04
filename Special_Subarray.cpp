//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-subarray-3-4de176ca/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int subset(vector<int>& v,int);
 
int main() {
	int t;
 
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n,in1;
		cin>>n;
		vector<int>v;
 
		//cout<<n<<endl;
		for(int j=0;j<n;j++)
		{
			cin>>in1;
			v.push_back(in1);
		}
		int c=subset(v,n);
		//cout<<endl;
		cout<<c<<endl;
	}
 
	    //Reading input from STDIN
		// Writing output to STDOUT
}
 
int subset(vector<int>& v,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		int sum1=0,xor1=0;
		for(int j=i;j<n;j++)
		{
			xor1=xor1^v[j];
			sum1=sum1+v[j];
			if(sum1==xor1)
				count++;
			else 
				break;
			
		}
		
	}
	return count;
}