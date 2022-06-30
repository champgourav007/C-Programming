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

int main()
{
    create();
    display();
}
