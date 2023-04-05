#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct recharge
{
    long long int num;
    int amt;
    char type[20];
    struct recharge *next;
}node;
node* getnode();
node* enqueue(node*);
void display(node*);
int main()
{
    node* head=NULL;
    int i,n;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            head=enqueue(head);
        }
            display(head);
    }
    return 0;
}
node* getnode()
{
    node* newnode;
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newnode->next = NULL;
    scanf("%lld %d %s",&newnode->num,&newnode->amt,newnode->type);
    return newnode;
}

node* enqueue(node* head)
{
    node* newnode=NULL;
    node* cur=NULL;
    newnode=getnode();
    if(head==NULL)
    {
       return newnode;
    }
   else
    {
        cur=head;
        while(cur->next!=NULL)
        {


        cur=cur->next;
        }
        cur->next=newnode;
    }
    return head;
}

void display(node* head)
{
    int post=0,pre=0,flag1=0,flag2=0;
    node* cur=NULL;
        cur=head;
        printf("Postpaid Requests\n");
        while(cur!=NULL)
        {
            if(strcmp("postpaid",cur->type)==0)
            {
                post=post+cur->amt;
                flag1=1;
            }
            cur=cur->next;
        }
            if(flag1==1)
            {     
                cur=head;
                 while(cur!=NULL)
                 {
                     if(strcmp("postpaid",cur->type)==0)
                     {
                        printf("%lld %d %s\n",cur->num,cur->amt,cur->type);
                     }cur=cur->next;
                  }
                printf("%d\n",post);
            }
            else
            {
                printf("Queue Empty\n0\n");
            }

         cur=head;
        printf("Prepaid Requests\n");
        while(cur!=NULL)
        {
            if(strcmp("prepaid",cur->type)==0)
            {
                pre=pre+cur->amt;
                flag2=1;
            }
            cur=cur->next;
        }
        if(flag2==1)
        {     
           cur=head;
           while(cur!=NULL)
           {
               if(strcmp("prepaid",cur->type)==0)
               {
                   printf("%lld %d %s\n",cur->num,cur->amt,cur->type);
               }            cur=cur->next;
          } 
           printf("%d\n",pre);
        }
       else
      {
          printf("Queue Empty\n0\n");
      }
}









