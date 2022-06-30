#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;

node *start = NULL;
node *temp, *ptr, *q, *cur, *prev;

int create()
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

int display()
{
    ptr = start;
    do
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!=start);

}

int insert_at_pos()
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

int del()
{
    int i, count,key;
    printf("Enter the key to delete it from the node: \n");
    scanf("%d",&key);
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    count = 0;
    cur   = start;
    prev  = cur;


    // Find node before head node
    while (prev->next != start)
    {
        prev = prev->next;
        count++;
    }

    // Iterate till first node
    i = 0;
    while (i <= count)
    {
        if (cur->data == key)
        {
            // Link prev node with next node of current
            if (cur->next != cur)
                prev->next = cur->next;
            else
                prev->next = NULL;

            // Adjust head node if needed
            if (cur == start)
                start = prev->next;

            // Delete current node
            free(cur);

            // Move current node ahead
            if (prev != NULL)
                cur = prev->next;
            else
                cur = NULL;
        }
        else
        {
            prev = cur;
            cur  = cur->next;
        }


        i++;

    }
}

int insert_at_beg()
{
    temp = (node*)malloc(sizeof(node));

    if(temp == NULL)
    {
        printf("Overflow\n");
        return;
    }

    printf("\nEnter the data into the new node: \n");
    scanf("%d",&temp->data);

    if(start == NULL)
    {
        temp->next = temp;
        start = temp;
    }
    else{
        ptr = start;

        while(ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = start;
        start = temp;
    }
}

int insert_at_end()
{
    temp = (node*)malloc(sizeof(node));

    if(temp == NULL)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter the data into the new node: ");
    scanf("%d",&temp->data);
    if (start == NULL)
    {
        temp->next = temp;
        start = temp;
    }
    else{
        ptr = start;
        while(ptr->next!=start)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = start;
    }
}
int main()
{
    int ser;
    create();
    display();
    printf("\nPress ----1--- insert new node at position\nPress----2---- delete a node from circular linked list\nPress----3---- insert at the begining\nPress---4---insert at the end\n");

    scanf("%d",&ser);

    switch (ser)
    {
    case 1:
        insert_at_pos();
        display();
        break;
    case 2:
        del();
        display();
        break;
    case 3:
        insert_at_beg();
        display();
        break;
    case 4:
        insert_at_end();
        display();
        break;
    }

}
