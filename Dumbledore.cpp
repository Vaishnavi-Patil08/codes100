//https://www.codechef.com/COOK144C/problems/DUMBLEDORE

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	long long n,m;
	cin>>n>>m;
    vector<long long int> a(n+1,0);
	long long ans=0;
	for(int i=0;i<m;i++)
	{
	    long int p,w;
	    cin>>p>>w;
	    a[p]+=w;
	    ans+=a[p];
	    cout<<ans<<endl;
	    
	}
	return 0;
}