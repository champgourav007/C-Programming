#include<stdio.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;

node *start = NULL;
node *ptr;
node *temp;

main()
{
    int len;

    printf("\nEnter the number of nodes: \n");
    scanf("%d",&len);

    do
    {
        temp=(node*)malloc(sizeof(node));

        printf("Enter the data into the node:\n");
        scanf("%d",&temp->data);
        temp->next = NULL;
        if (start==NULL)
        {
            temp = start;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = ptr->next;
        }
        len--;
    }
    while(len!=0);

    display();
}

void display()
{
    ptr = start;
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
}
