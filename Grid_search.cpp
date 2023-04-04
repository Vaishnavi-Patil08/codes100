//https://www.hackerrank.com/challenges/the-grid-search/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

char G[1005][1005], P[1005][1005];
void sol() 
{
        int R,C;
        cin>>R>>C;
        for (int j = 0; j < R; j++)
             cin>>G[j];
            
        int r,c;
        cin>>r>>c;
            
         for (int j = 0; j < r; j++) 
            cin>>P[j];
         for (int j = 0; j <= R - r; j++) 
         {
             for (int k = 0; k <= C - c;k++) 
             {
                for (int h = 0; h < r; h++) 
                {
                    for (int b = 0; b < c; ++b) {
                        if (G[j+h][k+b] != P[h][b]) 
                            goto label1;
                }
            }
            printf("YES\n");
            return;
            label1:;
        }
    }
    printf("NO\n");
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        sol();
    return 0;
}