//https://www.codechef.com/START80D/problems/SINGLEUSE

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,count=0;
        double h;
        cin>>h>>x>>y;
        if(h>=y)
        {
            h=h-y;
           // cout<<h<<endl;
            count++;
        }

        count=count + ceil(h/x);
        cout<<count<<endl;
        
    }
	// your code goes here
	return 0;
}
