#include<stdio.h>

typedef struct graph
{
    int u;
    int v;
    int w;
}g;
void bubble_sort(g* a[],int);
void kruskal(g a[],int);
 int main()
 {
     int n,e,i,res;
     printf("Enter number of nodes:\n");
     scanf("%d",&n);
     printf("Enter number of edges:\n");
     scanf("%d",&e);
     g a[10];
     printf("Enter node1,node2,weight:\n");
     for(i=0;i<e;i++)
     {
         scanf("%d%d%d",&a[i].u,&a[i].v,&a[i].w);
     }
     bubble_sort(a,e);
     kruskal(n,a);

 }

 void bubble_sort(g* a[],int n)
 {
     int i,j,temp1,temp2,temp3;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-1-i;j++)
         {
             if((a[j]->w)>(a[j+1]->w))
             {
                temp1=a[j]->w;
                a[j]->w=a[j+1]->w;
                a[j+1]->w=temp1;
                temp2=a[j]->u
                a[j]->u=a[j+1]->u;
                a[j+1]->w=temp2;
                temp3=a[j]->v
                a[j]->v=a[j+1]->v;
                a[j+1]->w=v;
             }
         }
     }
 }

 void kruskal(g a[10] , int n)
 {
    int i,j;
    int k,l;
    int temp[10];
    for(i=0;i<n;i++)
    {
        temp[i]=i;
    }

    for(i=0;i<n;i++)
    {
        k=a[i].u;
        l=a[i].v;
        if(temp[k]!=temp[l])
        {
            printf("(%d,%d)->%d",k,l,a[i].w);
            for(j=0;j<n;j++)
            {
               if(temp[j]==temp[k])
                    temp[j]=temp[l];
            }
        }
        else
            printf("Discard.\n");


    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",temp[i]);
    }
 }
