#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    int no_node, i, value;
    struct *start, *temp;

    temp = (node*)malloc(sizeof(struct node));
    printf("Enter the Number of nodes: \n");
    scanf("%d",&no_node);

    printf("Enter the Start Data: \n");
    scanf("%d",&temp->data);
    temp->next = NULL;

    for(i=1;i<=no_node;i++)
    {
        printf("Enter the Data: \n");
        scanf("%d",&temp->data);
        temp->next = NULL;

    }

}
