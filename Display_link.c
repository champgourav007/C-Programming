#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node *temp;
node *start=NULL;
node *ptr,*q;

int main()
{
    int ser;
    create();
    display();

    printf("\nPress ----1--- insert new node at position\nPress----2---- delete a node from linked list\nPress----3---- insert at the begining\nPress---4---insert at the end\n");
    scanf("%d",&ser);

    switch (ser)
    {
    case 1:
        insert_atpos();
        display();
        break;
    case 2:
        del();
        display();
        break;
    case 3:
        insert_beg();
        display();
        break;
    case 4:
        insert_end();
        display();
        break;
    }

}

void create()
{
    int ch,i;
    printf("\nEnter the choice\n");
    scanf("%d",&ch);

    for (i=0;i<ch;i++)
    {
        temp = (node*)malloc(sizeof(node));
        printf("Enter the Data\n");
        scanf("%d",&temp->data);
        temp->next = NULL;
        if(start == NULL)
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
    int c =0;
    ptr = start;
    printf("\nLinked list: \n");
    while(ptr!= NULL)
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
        c++;
    }
    printf("\nNo of element is: %d",c);
}

void insert_beg()
{
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter the data to insert at the begining\n");
    scanf("%d",&temp->data);
    temp->next = start;
    start = temp;
}

void insert_end()
{
    temp = (node*)malloc(sizeof(node));
    printf("\nEnter the data to be insert at the end\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    ptr = start;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;

}

void insert_atpos()
{
   int c = 1,pos;
   temp = (node*)malloc(sizeof(node));

   printf("\nEnter the data:\n");
   scanf("%d",&temp->data);
   printf("Enter the poition\n");
   scanf("%d",&pos);

   if(pos == 1)
   {
       temp->next = start;
       start = temp;
   }
   else{
    ptr = start;
    while(ptr!=NULL && c!= pos)
    {
        q = ptr;
        ptr = ptr->next;
        c++;
    }
    q->next = temp;
    temp->next = ptr;
   }
}

void del()
{
    int key;
    if(start == NULL)
    {
        printf("Underflow\n");
        return;
    }
    else{
        printf("\nEnter the data to be deleted: \n");
        scanf("%d",&key);

        ptr = start;
        while(ptr->next != NULL && ptr->data != key)
        {
            temp = ptr;
            ptr = ptr->next;
            if(ptr->data == key)
            {
                temp->next = ptr->next;
                free(ptr);
            }
            else{
                printf("Element is not found");
                break;
            }
        }
    }
}
