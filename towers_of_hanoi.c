#include<stdio.h>
#include<stdlib.h>

int main()
{
    towers(3,'A','C','B');
    return 0;
}

void towers(int n,char from,char to,char aux`)
{
    if (n==1)
    {
        printf("Disc %d moved from %c to %c\n",n,from,to);
        return;

    }
    towers(n-1,from,aux,to);
    printf("Disc %d moved from %c to %c.\n",n,from,to);
    towers(n-1,aux,to,from);
}
