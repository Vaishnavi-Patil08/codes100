//https://cses.fi/problemset/task/1636

#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int MOD = (int)1e9 + 7;
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
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if(j-vec[i-1]>=0)
            {
                dp[j]+=dp[j-vec[i-1]];
                dp[j]%=MOD;
            }

        }
    }
    cout<<dp[x]<<endl;
}