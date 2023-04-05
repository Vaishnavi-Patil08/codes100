//https://www.codechef.com/SEP221D/problems/CWIREFRAME

#include <iostream>
using namespace std;

int main() 
{
    int T,N,M,X;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N>>M>>X;
        int cost=(2*(N+M))*X;
        cout<<cost<<endl;
    }
	// your code goes here
	return 0;
}
