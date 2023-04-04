//https://www.codechef.com/START80D/problems/EQUALELE

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> a;
        map <int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        for(auto it:a)
        {
            m[it]++;
        }
        
        a.clear();
        
        for(auto itr:m)
        {
            a.push_back(itr.second);
        }
        int h=*max_element(a.begin(), a.end());
        int ans=n-h;
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
