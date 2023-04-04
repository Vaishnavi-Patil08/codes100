//https://www.codechef.com/START76D/problems/RACE400M

#include <iostream>
using namespace std;

int main() 
{
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        if(x<y && x<z)
        cout<<"ALICE"<<endl;
        else if(y<x && y<z)
        cout<<"BOB"<<endl;
        else if(z<y && z<x)
        cout<<"CHARLIE"<<endl;
    }
	// your code goes here
	return 0;
}
