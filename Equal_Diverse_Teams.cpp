//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/equal-diverse-teams-cbdb8fe2/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin >> t; 
	for(int i=0;i<t;i++)
	{
		int n,k,r;
		cin>>n>>k;
		map<int,int>m1;
		vector<int>vec;
		for(int i=0;i<n;i++)
		{
			cin>>r;
			vec.push_back(r);
		}
 
		for(auto itr:vec)
		{
			m1[itr]++;
		}
		int val=0,flag=0;
		for(auto iter:m1)
		{
			if(iter.second>=2)
				val++;
			else
				flag=1;
		}
 
		if(m1.size()<k)
			cout<<"NO"<<endl;
		else if(m1.size()==2*k)
			cout<<"YES"<<endl;
		else if(m1.size()==k && flag!=1)
			cout<<"YES"<<endl;
		else if(m1.size()>k && m1.size()< 2*k && val>=(k-(m1.size()-k)))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
		
}