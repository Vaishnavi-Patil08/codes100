//https://cses.fi/problemset/task/1635/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        vec.push_back(val);
    }
    vector<int> dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-vec[j]>=0)
                dp[i]=dp[i]+dp[i-vec[j]];
        }
    }
    cout<<dp[x]<<endl;
}
