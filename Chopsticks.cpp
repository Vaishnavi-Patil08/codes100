//https://www.codechef.com/problems/TACHSTCK

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,d;
    cin>>n>>d;
    vector<int>ch;
    for(int i=0;i<n;i++)
    {
        int c;
        cin>>c;
        ch.push_back(c);
    }
    sort(ch.begin(), ch.end(), greater<int>());
    int count=0;
    for(int j=0;j<n;j++)
    {
        
        if((ch[j]-ch[j+1])>d)
            continue;
        else
        {
          count++;
          j++;
        }
    }
    
    cout << count <<endl;
	// your code goes here
	return 0;
}
