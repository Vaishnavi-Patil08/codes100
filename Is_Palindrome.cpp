//https://www.hackerearth.com/problem/algorithm/is-palindrome-2-eb50514b/
#include<bits/stdc++.h>
using namespace std;
 
void palindrome(vector<char>letters,int n)
{
	for(int i=0;i<n;i++)
	{
		int q;
		cin>>q;
		int l,r;
 
		if(q==1)
		{
			char ch;
			cin>>l>>r>>ch;
			for(int j=l-1;j<=r-1;j++)
				letters[j]=ch;
	
		}
 
		else
		{
			cin >>l>>r;
			int bits=0, mask=0;			
			for(int j=l-1;j<r;j++)
			{
				int num1 = letters[j]-'a';
				mask = 1<<num1;		
				bits = bits^mask;
			}
		
			if((bits & (bits-1))==0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
}
 
int main() 
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<char>letters;
	for(int i=0;i<s.length();i++)
		letters.push_back(s[i]);
	
	
		palindrome(letters,n);
	
	
	
 
	return 0;
}