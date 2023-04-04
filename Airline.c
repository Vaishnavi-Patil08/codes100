//https://www.codechef.com/SEPT21C/problems/AIRLINE

#include <stdio.h>
int Airline(int,int,int,int,int);
int main(void) 
{
    int T,i,A,B,C,D,E,Bag;
    scanf("%d",&T);
    if(T>=1 && T<=36000)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
            if(A>=1 && A<=10 && B>=1 && B<=10 && C>=1 && C<=10 && D>=15 && D<=20 && E>=5 && E<=10)
            {
            Bag=Airline(A,B,C,D,E);
            if(Bag==1)
            printf("Yes\n");
            else
            printf("No\n");
            }
        }
    }
	// your code goes here
	return 0;
}

int Airline (int a, int b, int c, int d, int e)
{
    if((a+b)<=d && c<=e)
    return 1;
    else if((b+c)<=d && a<=e)
    return 1;
    else if((a+c)<=d && b<=e)
    return 1;
    else
    return 0;
}
    
    

