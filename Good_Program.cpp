//https://www.codechef.com/LTIME105D/problems/NIBBLE

#include <stdio.h>
void find(int);
int main(void) 
{
    int T,N;
    scanf("%d",&T);
    if(T>=1 && T<=1000)
    {
        int i;
        for(i=0;i<T;i++)
        {
            scanf("%d",&N);
            find(N);
        }
    }
	// your code goes here
	return 0;
}

void find(int n)
{
    int num2;
    float num1=(n/4.0);
    num2=(n/4);
    if((num1-num2)==0)
    printf("GOOD\n");
    else
    printf("NOT GOOD\n");
}
