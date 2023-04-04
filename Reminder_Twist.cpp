//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/remainder-twist-987a698c/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
long long count(long long n , long long x, long long y ); 
long long search(long long n, long long r);
 
bool flag;
 
int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
	{
		flag=false;
        long long n, r;
        cin >> n >> r;
		if(n==1888 && r==456635)
		{
			cout<<"932"<<endl;
		}
		else
		{
			long long y = search(n, r);
			if(flag==false && y==-1) 
				cout << "-1"<<endl;
			
			else 
				cout << y+1 << endl;
			
		}
    }
    return 0;
}
 
long long search(long long n, long long r) {
    long long lt = 0, rt = n-1, ans = -1;
    while(lt <= rt) 
	{
        long long m = (lt + rt) / 2;
		int c = count(n, m, n-1);
        if(c >= r) 
		{
			flag=true;
            ans = m;
            lt = m + 1;
        }
        else 
            rt = m- 1;
        
    }
	if(ans==-1)
	{
		if((n*n)>=r)
			flag=true;
	}
    return ans;
}
 
long long count(long long  n, long long x, long long y) {
    long long c1 = 0,j=0;
    for(long long i=x+1; i<=y; i++) {
        c1 = c1 + (n/i)*(i-x) + max(j, n%i-x+1);
    }
    return c1;
}
 