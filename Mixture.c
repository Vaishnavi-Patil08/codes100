https://www.codechef.com/OCT21C/problems/MIXTURE

#include <stdio.h>
int mixture(int,int);
int main(void) 
{
    int T,i,A,B,C;
    scanf("%d",&T);
    if(T>=1 && T<=20)
    {
        for(i=0;i<T;i++)
        {
        scanf("%d%d",&A,&B);
        if(A>=0 && A<=100 && B>=0 && B<=100 )
        {
            if((A+B)>0)
            {
               C=mixture(A,B);
               if(C==1)
               printf("Solution\n");
               else if(C==2)
               printf("Solid\n");
               else
               printf("Liquid\n");
            }
        }
        }
    }
	// your code goes here
	return 0;
}

int mixture(int a,int b)
{
    if(a>0 && b>0)
    return 1;
    else if(b==0)
    return 2;
    else if(a==0)
    return 3;
}