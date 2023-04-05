//https://www.codechef.com/FEB222C/problems/HELIUM3

#include <stdio.h>


int main(void) 
{
	// your code goes here
	int T,i;
	int A,B,X,Y;
	scanf("%d",&T);
	if(T>=1 && T<=1000)
	{
	   for(i=0;i<T;i++)
	   {
	       scanf("%d%d%d%d",&A,&B,&X,&Y);
	       if((A*B)<=(X*Y))
	       {
	           printf("YES\n");
	       }
	       else
	           {
	               printf("NO\n");
	           }
	   }
	}
	return 0;
}
