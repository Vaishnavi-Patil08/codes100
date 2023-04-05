//https://www.codechef.com/COOK130C/problems/VISA

#include <stdio.h>
void visa(int);
int main()
{
    int T;
    scanf("%d",&T);
    if(T>=1&&T<=5000)
    {
    visa(T);
    }
    else;
	// your code goes here
	return 0;
}
void visa(int T)
{
    int i;
    int x1,x2,y1,y2,z1,z2;
    for(i=0;i<T;i++)
    {
        scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
        if(x1>=20&&x2<=50&&y1>=1900&&y2<=2100&&z1>=1&&z2<=6)
        {
            if((x2>=x1)&&(y2>=y1)&&(z2<=z1))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else;

    }
}

