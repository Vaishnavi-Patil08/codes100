//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/horse-race-122f4ccc/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m,x;
		cin>>n>>m>>x;
		//vector<int> a;
		vector<int>b(m,0);
		int flag=0;
		for(int j=0;j<n;j++)
		{
			int yu;
			cin>>yu;
			//a.push_back(yu);
			if(yu<=m)
				b[yu-1]++;
			else
				flag++;
		}
		
 
		sort(b.begin(),b.end());
 
 
 
		//cout<<b[0]<<" "<<b[1]<<endl;
		//cout<<"Next"<<endl;
 
		while(x-- && flag--)
		{
			b[0]++;
			sort(b.begin(),b.end());
		}
		while(x--){
			if(abs(b[0]-b[m-1])<=1)
				break;
			else{
				b[0]++;
				b[m-1]--;
				for(int d=0;d<m-1;d++){
					if(b[d]>b[d+1])
						swap(b[d],b[d+1]);
					else
						break;
				}
				for(int d=m-1;d>=1;d--){
					if(b[d-1]>b[d])
						swap(b[d],b[d-1]);
					else
						break;	
				}
 
			}
		}
		cout<<b[0]<<endl;
	}
	
			//cout<<b[0]<<" "<<b[1]<<endl;
}