//https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem?isFullScreen=true

#include<bits/stdc++.h>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        vector< vector<int> > vec(n,vector<int>(n));
        long long Tin[101]={0};
        long long Tof[100]={0};
        
        for(int j = 0;j < n;j++)
        {
           for(int h = 0;h < n;h++)
           {
              cin >> vec[j][h];
               Tin[j]+=vec[j][h];
               Tof[h]+=vec[j][h];
           }
        }
        sort(Tin,Tin+100);
        sort(Tof,Tof+100);
        int k;
        for(k=0;k<100;k++)
            {
            if(Tin[k]!=Tof[k])
                break;
        }
        if(k==100)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
        // your code goes here
    }
    return 0;
}