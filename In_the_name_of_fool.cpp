//https://www.hackerrank.com/contests/fools-2023/challenges/in-the-name-of-fool/submissions/code/1358968911

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    vector<string>str;
    map<string,int>mp;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string st;
        cin>>st;
        str.push_back(st);
    }
    for(auto it:str)
        mp[it]++;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string w;
        cin>>w;
        map<string,int>::iterator itr;
        itr=mp.find(w);
            if(itr!=mp.end())
                cout<<itr->second<<endl;
            else
                cout<<"0"<<endl;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
