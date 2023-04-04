//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/largest-number-7-eee0b7c3/

#include<bits/stdc++.h>
using namespace std;
 
void largest_number(string num,int k)
{
	stack<char> str;
	for(char c : num)
	{
        while(k > 0 && !str.empty() && str.top() < c)
		{
            str.pop();
            k--;
        }
        str.push(c);
    }
 
    while(k > 0){
        str.pop();
        k--;
    }
 
    string ans = "";
    while(!str.empty())
	{
        ans += str.top();
        str.pop();
    }
 
    reverse(ans.begin(), ans.end());
 
    cout << ans << endl;
}
 
int main(){
    string num;
    int k;
    cin >> num >> k;
	largest_number(num,k);
    return 0;
}