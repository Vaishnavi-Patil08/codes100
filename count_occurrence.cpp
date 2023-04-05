#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int search(string s, int l)
{
    int count=0;
    string p="aps";
    for(int i=0;i<l-2;i++)
    {
        int j;
        for(j=0;j<3;j++)
        {
            if(s.at(i+j)!=p.at(j))
                break;
        }
        if(j==3)
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    int n,l;
    cin>>n;
    l=n;
    string s;
    getchar();
    getline(cin,s);
    for(int i=0;i< s.length();i++)
    {
        if(s.at(i)== ' ')
            s.erase(i,1);
        l--;
    }
 
    int m =search(s,s.length());
   cout<<m<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
