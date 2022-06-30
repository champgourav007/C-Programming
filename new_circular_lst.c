#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;

node *ptr,*temp,*q;
node *start = NULL;

void create()
{
    int ran,i;
    printf("Enter the range of the node: \n");
    scanf("%d",&ran);

    for(i=0;i<ran;i++)
    {
        temp = (node*)malloc(sizeof(node));
        if (temp==NULL)
        {
            printf("Underflow\n");
            return;
        }
        else
        {
            printf("Enter the data into %d node: \n",i+1);
            scanf("%d",&temp->data);
            if(start==NULL)
            {
                start = temp;
                ptr = temp;
            }
            else
            {
                ptr->next = temp;
                ptr = ptr->next;
            }
        }
    }

    temp->next = start;
}

void insert_at_beg()
{
    temp = (node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        printf("Enter the data into the new node: ");
        scanf("%d",&temp->data);
        ptr = start;
        while(ptr->next != start)
        {
            ptr= ptr->next;
        }

        ptr->next = temp;
        temp->next = start;
        start = temp;
    }
}

void display()
{
    ptr = start;
    do
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!= start);
}

int main()
{
    create();
    insert_at_beg();
    display();
}
