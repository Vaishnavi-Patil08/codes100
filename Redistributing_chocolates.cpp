//https://www.codechef.com/START76D/problems/REDSTRBTN

#include <iostream>
using namespace std;

int main() 
{
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        if((x+y+z)<6)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
