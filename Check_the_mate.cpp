#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>t;
            if(t!=-1)
                a[t]++;
        }
            
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<1){
            cout<<i<<"\n";
            flag=1;
        }
    }
    if(flag==0)
        cout<<"-1";
    return 0;
}