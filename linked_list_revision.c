#include<stdio.h>
#include<stdlib.h>

typedef struct nodetype
{
    int data;
    struct nodetype* next;
}node;
node* start = NULL;
node* temp;
node* ptr;

void create()
{
    int ch=1;
    do{

        temp = (node*)malloc(sizeof(node));
        printf("Enter the data into the node : ");
        scanf("%d",&temp->data);

        if(start==NULL)
        {
            start = temp;
            ptr = temp;
        }
        else
        {
            ptr->next = temp;
            ptr = temp;
        }

        temp->next = NULL;
        printf("If do you want to continue enter 1 else enter 0 : ");
        scanf("%d",&ch);
    }
    while(ch==1);
    
}

void print_linked_list()
{
    ptr =  start;

    printf("\n--------Data Into the linked list----------\n");

    while(ptr!=NULL)
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}



int main()
{
    int choice;

    do{

        printf("\nEnter 1 to create a linked list\n");
        printf("Enter 2 to print the data of the linked list\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                create();
                break;
            case 2:
                print_linked_list();
                break;
            case 3:
                exit(3);
            default:
                printf("Wrong Input");
                break;
        }
    }
    while(3);

}