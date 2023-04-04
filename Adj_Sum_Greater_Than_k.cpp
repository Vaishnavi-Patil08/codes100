//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/adjacent-sum-greater-than-k-f41e3ec4/

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int start=1,n1=n,s=k;
		int end=k-1;
		int e1=k;
 
		if(k>n+1)
			cout<<-1<<endl;
 
		else if(k%2==0)
		{
			while(n1>0)
			{
				if(start<end )
 
				{
					cout<<start<<" "<<end<<" ";
					start++;
					end--;
					n1=n1-2;
				}
 
				else if(start==end && start!=-1)
				{
					cout<<start<<" ";
					start=-1;
					end=-1;
					n1=n1-1;
				}
					
				
				else
				{
					cout<<s<<" ";
					s++;
					n1=n1-1;
				}
			}
			cout<<endl;
		}
 
		else if(k%2!=0)
		{
			while(start<end)
			{
				cout<<start<<" "<<end<<" ";
				start++;
				end--;
				n1=n1-2;
			}
			while(n1>0)
			{
				cout<<s<<" ";
				s=s+1;
				n1=n1-1;
			}
 
			cout<<endl;
		}
 
		
	}
}