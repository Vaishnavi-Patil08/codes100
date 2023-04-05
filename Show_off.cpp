#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void dfs(int n, int m,vector<vector<int>> &original,int i, int j)
{
    if(i<0 || j<0 || i>n-1 || j>m-1 || original[i][j] != 1)
        return;

    if(original[i][j] == 1)
    {
        original[i][j] = 0;

        dfs(n, m, original, i+1, j);
        dfs(n, m,original, i-1, j);
        dfs(n, m,original, i, j+1);
        dfs(n, m,original, i, j-1);
        dfs(n, m,original, i+1, j+1);
        dfs(n, m,original, i-1, j-1);
        dfs(n, m,original, i+1, j-1);
        dfs(n, m,original, i-1, j+1);
    }
}

int numberClusters(vector<vector<int>> &original,int n, int m)
{
    int count = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(original[i][j] == 1)
            {
                original[i][j] = 0;
                count++;

        dfs(n, m, original, i+1, j);
        dfs(n, m,original, i-1, j);
        dfs(n, m,original, i, j+1);
        dfs(n, m,original, i, j-1);
        dfs(n, m,original, i+1, j+1);
        dfs(n, m,original, i-1, j-1);
        dfs(n, m,original, i+1, j-1);
        dfs(n, m,original, i-1, j+1);
            }
        }
    }
    return count;
}

int main() {
    int i;
    cin>>i;

    while(i--)
    {
        int n,m;

        cin>>n>>m;

        int ori1[n][m];
        int ori2[n][m];

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>ori1[j][k];
            }
        }

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>ori2[j][k];
            }
        }

        vector<vector<int>> original1(n,vector<int> (m));
        vector<vector<int>> original2(n,vector<int> (m));

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            original1[j][k] = ori1[j][k];
        }

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            original2[j][k] = ori2[j][k];
        }

        int numberRishu = 0;
        numberRishu = numberClusters(original1,n, m);



        int numberShibu = 0;
        numberShibu = numberClusters(original2,n, m);

        if(numberRishu >= numberShibu)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}