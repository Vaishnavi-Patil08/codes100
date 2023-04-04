//https://www.codechef.com/problems/REPEAT

#include <stdio.h>
void repeat(int,int,int);
int main(void) 
{
    int T,N,K,S,i;
    scanf("%d",&T);
    if(T>=1 && T<=1000);
    {
        for(i=0;i<T;i++)
        {
            scanf("%d%d%d",&N,&K,&S);
            if(N>=1 && N<=10000 && S>=1 && S<=1000000000 && K>=2 && K<=10000)
            {
                repeat(N,K,S);
            }
        }
    }
    // your code goes here
	return 0;
}
void repeat(int n,int k, int s)
{
    int sum=(n*n);
    int S1=(s-sum);
    int op;
    op=(S1/(k-1));
    printf("%d\n",op);
    
}

