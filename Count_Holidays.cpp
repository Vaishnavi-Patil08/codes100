//https://www.codechef.com/problems/SUNDAY

#include <stdio.h>
#include<math.h>
int main(void)
{
    int T,N;
    int a[30];
    scanf("%d",&T);
    if(T>=1 && T<=1000)
    {
        for(int i=0;i<T;i++)
        {
            scanf("%d",&N);
            for(int j=0;j<N;j++)
            {
                scanf("%d",&a[j]);
            }
            find(a,N);
        }
    }
    
	// your code goes here
	return 0;
}

void find(int a[],int n)
{
    int s=n+8;
    for(int i=0;i<n;i++)
    {
        if((a[i]%7)==6 || (a[i]%7)==0)
            s--;
        
    }
    printf("%d\n",s);
}
