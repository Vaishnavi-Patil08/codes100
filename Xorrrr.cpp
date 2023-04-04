//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/xorrrr-40caac1a/

#include <bits/stdc++.h>
using namespace std;
 
void graph(int n)
{
	long long a,b,sum=0,count=0,i;
	vector<vector<long long>> m(n+1,vector<long long>(1,0));
   
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		m[a].push_back(b);
		m[b].push_back(a);
	}
 
	vector<bool>visited(n+1,0);
	
	long long q[n+n];
	long long f1=1,f2=1,u;
	q[f2]=1;
	visited[1]=1;
 
	long long paths[n+1];
	paths[1]=0;
	while(f1<=f2 && count<n)
	{
		u=q[f1];
		f1++;
		for(i=1;i<m[u].size();i++){
			if(visited[m[u][i]]==0){
				paths[m[u][i]]=(u+m[u][i])^paths[u];
				sum^=paths[m[u][i]];
				visited[m[u][i]]=1;
				count++;
				f2++;
				q[f2]=m[u][i];
			}
		}
	}
	
	cout<<sum<<endl;
}
 
int main() {
 
	long long n;
	cin>>n;
	if(n%2==1)
		cout<<0;
	
	else
		graph(n);
	
	return 0;
}