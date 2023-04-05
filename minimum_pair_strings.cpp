#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string a,b;
    int min=0;
    cin>>a>>b;
    map<char,int> mp;
    for(auto i:a) mp[i]++;
    for(auto i:b)
    {
        min+=mp[i];
    }
    cout<<min;
    return 0;
}