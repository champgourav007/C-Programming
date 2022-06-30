#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;

node *start = NULL;
node *temp, *ptr, *q;

void create()
{
    int ran,i;
    printf("Enter the the number of the node: ");
    scanf("%d",&ran);
    for(i=0;i<ran;i++)
    {
        temp = (node*)malloc(sizeof(node));
        if (temp == NULL)
        {
            printf("Underflow\n");
            return;
        }
        else
        {
            printf("Enter the data into the %d node : ",i+1);
            scanf("%d",&temp->data);
            if (start == NULL)
            {
                start = temp;
                ptr = temp;
                ptr->next = start;
            }
            else
            {
                ptr->next = temp;
                ptr = temp;
                ptr->next = start;
            }

        }

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
    while(ptr!=start);

}

void insert_at_pos()
{
    int pos,coun;
    printf("\nEnter the the position to insert into the circular linked list: ");
    scanf("%d",&pos);
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter the data of the new node: ");
    scanf("%d",&temp->data);
    ptr= start;
    coun = 1;
    do
    {
        if(coun==pos)
        {
            temp->next = ptr->next;
            ptr->next = temp;
            break;
        }
        else
        {
            coun++;
            ptr = ptr->next;
        }
    }
    while(ptr!=start);
}
void insert_at_beg()
{
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter the data for new node: ");
    scanf("%d",&temp->data);

    ptr = start;
    do
    {
        ptr = ptr->next;
    }
    while(ptr!=NULL);

    temp->next = ptr;
    start = temp;


}

int main()
{
    create();
    display();
    insert_at_pos();
    display();
    insert_at_beg();
    display();

}
