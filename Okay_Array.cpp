#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        map<int, int> mp;
        for(auto i:a) mp[i]++;
        for(auto i: mp)
        {
            if(i.second==k)
                c++;
        }
        if(c==k)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}