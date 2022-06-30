#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}*start=NULL;
int
void create()
    {
        int ch;
        printf("Enter the choice");
        scanf("%d",&ch);
        while(ch!=1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data\n");
            scanf("%d",&temp->data);
            temp->next=NULL;
            if (start==NULL)
            {
                ptr=temp;
                start=temp;
            }
            else
            {
                ptr->next=temp;
                ptr=ptr->next;
            }
            printf("Press 2 to continue");
            scanf("%d",&ch);
        }
    }

void main()
{
    create();
}
