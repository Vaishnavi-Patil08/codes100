//https://www.codechef.com/START80D/problems/RUNCOMPARE

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,c=0;
        cin>>n;
        vector<int> a;
        for(int j=0;j<n;j++)
        {
            cin>>m;
            a.push_back(m);
        }
        for(int j=0;j<n;j++)
        {
            cin>>m;
            if(a[j]<=(2*m) && m<=(2*a[j]))
                c++;
        }
        cout<<c<<endl;
        
    }
	// your code goes here
	return 0;
}
