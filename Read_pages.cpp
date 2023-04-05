//https://www.codechef.com/START76D/problems/READPAGES
#include <iostream>
using namespace std;

int main() 
{
    int t,n,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>x>>y;
        if((x*y)<n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
