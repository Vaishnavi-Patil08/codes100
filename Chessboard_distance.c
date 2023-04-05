//https://www.codechef.com/LTIME105D/problems/CHESSDIST

#include <stdio.h>
void dist(int,int,int,int);
int main(void)
{
    int T;
    scanf("%d",&T);
    if(T>=1 && T<=1000)
    {
        int i,x1,y1,x2,y2;
        for(i=0;i<T;i++)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            dist(x1,y1,x2,y2);
        }
    }
	// your code goes here
	return 0;
}

void dist(int x1, int y1,int x2, int y2)
{
    int x,y;
    x=abs(x1-x2);
    y=abs(y1-y2);
    if(x>y)
    printf("%d\n",x);
    else
    printf("%d\n",y);
    
}
