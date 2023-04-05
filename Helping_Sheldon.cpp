#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,z,o;
    cin>>n>>z>>o;
    long long tem=n,c=0;
    if(tem<z)
        cout<<tem;
    else
    {
        c+=z*(tem/(z+o));
        tem=tem%(z+o);
        if(tem<z)
            c+=tem;
        else
            c+=z;
        cout<<c;
        
    }
        
    return 0;
}