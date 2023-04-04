//https://www.codechef.com/START29D/problems/BOMBTHEBASE
#include <stdio.h>

int main(void)
{
    int N,X,T;
    int A[100000];
    scanf("%d",&T);
    if(T>=1 && T<=100)
    {
        for(int i=0;i<T;i++)
        {
            scanf("%d%d",&N,&X);
            for(int j=0;j<N;j++)
            {
                scanf("%d",&A[j]);
            }
            int H=0;
            for(int m=0;m<N;m++)
            {
                if(A[m]<X)
                {
                    H=m+1;
                }
            }
            printf("%d\n",H);
        }
        
    }
	// your code goes here
	return 0;
}

