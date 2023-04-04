//https://www.codechef.com/START28D/problems/SELFDEF
#include <stdio.h>

int main(void) 
{
    int T,n;
    int a[100];
    scanf("%d",&T);
    if(T>=1 && T<=20)
    {
        int i;
        for(i=0;i<T;i++)
        {
            scanf("%d",&n);
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[j]);
            }
            int c=0;
            for(int m=0;m<n;m++)
            {
                if(a[m]>=10 && a[m]<=60)
                    c++;
                    
            }
            printf("%d\n",c);
        }
    }
	// your code goes here
	return 0;
}

