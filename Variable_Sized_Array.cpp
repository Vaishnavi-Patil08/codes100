//https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>>vec;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        vector<int>v;
        for(int j=0;j<s;j++)
        {  
            int num;     
            cin>>num;
            v.push_back(num);
        }
        vec.push_back(v);
    }
    
    for(int h=0;h<q;h++)
    {
        int k,l;
        cin>>k>>l;
        cout<<vec[k][l]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
