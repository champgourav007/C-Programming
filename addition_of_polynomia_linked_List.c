#include <stdio.h>
#include <stdlib.h>
typedef struct nodetype
{
    int data;
    int expo;
    struct nodetype *next;
} node;

node *start1 = NULL;
node *start2 = NULL;
node *start = NULL;
node *ptr, *temp, *ptr1, *ptr2;

void create(int flag)
{
    int ch, count = 1;
    printf("\nEnter the number of node: \n");
    scanf("%d", &ch);
    while (ch != 0)
    {
        temp = (node *)malloc(sizeof(node));
        if (temp == NULL)
        {
            printf("Underflow\n");
            return;
        }
        printf("Enter the coefficient of node %d\n", count);
        scanf("%d", &temp->data);
        printf("Enter the exponent of the node %d\n", count);
        scanf("%d", &temp->expo);
        count++;
        temp->next = NULL;
        if (flag == 1)
        {
            if (start1 == NULL)
            {
                start1 = temp;
                ptr1 = temp;
            }
            else
            {
                ptr1->next = temp;
                ptr1 = ptr1->next;
            }
        }
        else
        {
            if (start2 == NULL)
            {
                start2 = temp;
                ptr2 = temp;
            }
            else
            {
                ptr2->next = temp;
                ptr2 = ptr2->next;
            }
        }
        ch--;
    }
}

void display(int flag)
{
    if (flag == 1)
    {
        ptr1 = start1;
        printf("Polynomial 1: ");
        while (ptr1 != NULL)
        {
            printf("%dx^%d ", ptr1->data, ptr1->expo);
            ptr1 = ptr1->next;
        }
    }
    else
    {
        ptr2 = start2;
        printf("Polynomial 2: ");
        while (ptr2 != NULL)
        {
            printf("%dx^%d ", ptr2->data, ptr2->expo);
            ptr2 = ptr2->next;
        }
    }
}

void addition_of_polynomial()
{
    ptr1 = start1;
    ptr2 = start2;
    ptr = (node *)malloc(sizeof(node));
    start = ptr;
    if (ptr1->expo > ptr2->expo)
    {
        ptr->data = ptr1->data;
        ptr->expo = ptr1->expo;
        ptr1 = ptr1->next;
    }
    else if (ptr2->expo > ptr1->expo)
    {
        ptr->data = ptr2->data;
        ptr->expo = ptr2->expo;
        ptr2 = ptr2->next;
    }
    else
    {
        ptr->data = ptr1->data + ptr2->data;
        ptr->expo = ptr1->expo;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        temp = (node *)malloc(sizeof(node));
        if (ptr1->expo > ptr2->expo)
        {
            temp->data = ptr1->data;
            temp->expo = ptr1->expo;
            ptr1 = ptr1->next;
            ptr->next = temp;
            ptr = temp;
        }
        else if (ptr2->expo > ptr1->expo)
        {
            temp->data = ptr2->data;
            temp->expo = ptr2->expo;
            ptr2 = ptr2->next;
            ptr->next = temp;
            ptr = temp;
        }
        else
        {
            temp->data = ptr1->data + ptr2->data;
            temp->expo = ptr1->expo;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            ptr->next = temp;
            ptr = temp;
        }
    }
    while (ptr1 != NULL)
    {
        temp = (node *)malloc(sizeof(node));
        temp->data = ptr1->data;
        temp->expo = ptr1->expo;

        ptr1 = ptr1->next;
        ptr->next = temp;
        ptr = temp;
    }
    while (ptr2 != NULL)
    {
        temp = (node *)malloc(sizeof(node));
        temp->data = ptr2->data;
        temp->expo = ptr2->expo;

        ptr2 = ptr2->next;
        ptr->next = temp;
        ptr = temp;
    }

    ptr->next = NULL;
}

void display_addition()
{
    ptr = start;
    printf("\n\nSum of the polynomial:\n\n");
    while (ptr != NULL)
    {
        printf("     %dx^%d ", ptr->data, ptr->expo);
        ptr = ptr->next;
    }
}

int main()
{
    int flag = 1;
    create(flag);
    display(flag);
    flag++;
    create(flag);
    display(flag);
    addition_of_polynomial();
    display_addition();
}
