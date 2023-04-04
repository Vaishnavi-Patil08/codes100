//https://practice.geeksforgeeks.org/problems/set-bits0143/0

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    string s1=s;
    int l,r;
    cin>>l>>r;
    int index=r-1;
    for(int i=l-1;i<r;i++)
    {
        s1[index]=90-s[i]+65;
        index--;
    }
    cout<<s1;
    return 0;
}