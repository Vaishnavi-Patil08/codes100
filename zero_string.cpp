//https://www.codechef.com/START76D/problems/ZEROSTRING

#include <iostream>
using namespace std;

int main() 
{
    int t,n;
    string s;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        int o=0,z=0;
        for(int j=0;j<n;j++)
        {
            char c=s.at(j);
            if(c=='0')
                z=z+1;
            else
                o=o+1;
        }
        if(o==z)
        cout<<o<<endl;
        else if(o<z)
        cout<<o<<endl;
        else if(o>z)
        cout<<z+1<<endl;
    }
	// your code goes here
	return 0;
}
