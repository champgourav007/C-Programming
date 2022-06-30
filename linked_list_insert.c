#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;

node *start = NULL;
node *ptr, *temp;

void create()
{
    int ran,i;

    printf("Enter the range of the Linked List\n");
    scanf("%d",&ran);

    for(i=0;i<ran;i++)
    {
        temp = (node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Size Overflow\n");
            return 1;
        }
        printf("Enter the data into the node[%d]\n",i+1);
        scanf("%d",&temp->data);
        temp->next = NULL;

        if (start==NULL)
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

void display()
{
    ptr = start;
    printf("[ ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("]");
}
void insert_at_position()
{
    int pos,count;
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter the data into the node to insert\n");
    scanf("%d",&temp->data);
    printf("Enter the location\n");
    scanf("%d",&pos);
    ptr = start;
    count = 0;
    while(ptr!=NULL)
    {
        count++;
        if(count==pos-1)
        {
            temp->next = ptr->next;
            ptr->next = temp;
        }
        else
        {
            printf("Overflow\n");
            return;
        }

        ptr = ptr->next;
    }
}

main()
{
    create();
    display();
    insert_at_position();
    display();
}

