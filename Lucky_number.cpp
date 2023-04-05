//https://www.codechef.com/problems/HP18

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,a1=0,b1=0,temp,com=0;
        cin>>n>>a>>b;
        
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp%a==0 && temp%b==0)
            com++;
            else if(temp%a==0)
            a1++;
            else if(temp%b==0)
            b1++;
        }
        
        if(com!=0)
        b1--;
        
        if(a1>b1)
            cout<<"BOB"<<endl;
            else
            cout<<"ALICE"<<endl;   
        
        
    }
    return 0;
}