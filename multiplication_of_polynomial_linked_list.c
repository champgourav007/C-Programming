#include<stdio.h>
#include<stdlib.h>
typedef struct nodetype
{
    int data;
    int expo;
    struct nodetype *next;
}node;

node *start1 = NULL;
node *start2 = NULL;
node *start = NULL;
node *start3 = NULL;
node *ptr,*temp,*ptr1,*ptr2,*q,*ptr3;

// creating function of polynomial
void create(int flag)
{
    int ch,count=1;
    printf("\nEnter the number of node: \n");
    scanf("%d",&ch);
    while(ch!=0)
    {
        temp = (node*)malloc(sizeof(node));
        if(temp == NULL)
        {
            printf("Underflow\n");
            return;
        }
        printf("Enter the coefficient of node %d\n",count);
        scanf("%d",&temp->data);
        printf("Enter the exponent of the node %d\n",count);
        scanf("%d",&temp->expo);
        count++;
        temp->next = NULL;
        if (flag == 1) //For first polynomial
        {
            if(start1 == NULL)
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
        else  // for second polynomial
        {
            if(start2 == NULL)
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

// display function of polynomial
void display(int flag)
{
  if (flag==1)  // for first polynomial
  {
      ptr1 = start1;
      printf("Polynomial 1: ");
      while(ptr1!=NULL)
      {
          printf("%dx^%d ",ptr1->data,ptr1->expo);
          ptr1 = ptr1->next;
      }
  }
  else  // for second polynomial
  {
      ptr2 = start2;
      printf("Polynomial 2: ");
      while(ptr2!=NULL)
      {
          printf("%dx^%d ",ptr2->data,ptr2->expo);
          ptr2 = ptr2->next;
      }
  }
}

//multiplication of two polynomial
void multiplicaion_polynomial()
{
    ptr1 = start1;
    while(ptr1 != NULL)
    {
        ptr2 = start2;
        while(ptr2 != NULL)
        {
            temp = (node*)malloc(sizeof(node));
            temp->data = ptr1->data * ptr2->data;
            temp->expo = ptr1->expo + ptr2->expo;
            if(start == NULL)
            {
                start = temp;
                ptr = temp;
            }
            else
            {
                ptr->next = temp;
                ptr = temp;
            }
            ptr2 = ptr2->next;
        }

        ptr1 = ptr1->next;
    }
    ptr->next = NULL;
}

//displaying the multiplied polynomial
void display_multiplication()
{
    ptr = start3;
    printf("\n\nMultiplication of the polynomial:\n");
    while(ptr!=NULL)
    {
        printf("  %dx^%d ",ptr->data,ptr->expo);
        ptr= ptr->next;
    }
}

// summing up the multiplied polynomial having same exponents
void addup()
{
    int flag = 0;
    ptr = start;
    while(ptr!=NULL)
    {
        q = ptr->next;
        if(ptr->next==NULL)
        {
            temp = (node*)malloc(sizeof(node));   //for final node variable
            temp->data = ptr->data;
            temp->expo= ptr->expo;
            ptr3->next = temp;
            ptr3 = temp;
        }
        while(q!=NULL)
        {
            if (ptr->expo == q->expo)
            {
                flag = 1;
                temp = (node*)malloc(sizeof(node));
                temp->data = ptr->data + q->data;
                temp->expo = ptr->expo;

                if(start3 == NULL)
                {
                    start3 = temp;
                    ptr3 = temp;
                }
                else
                {
                    ptr3->next = temp;
                    ptr3 = temp;
                }
                q = q->next;
            }
            else
                q = q->next;

        }

        if (flag == 0)
        {
            temp = (node*)malloc(sizeof(node));
            temp->data = ptr->data;
            temp->expo = ptr->expo;
            if(start3 == NULL)
            {
                start3 = temp;
                ptr3 = temp;
            }
            else
            {
                ptr3->next = temp;
                ptr3 = temp;
            }
        }

        ptr = ptr->next;

    }
    ptr3->next = NULL;
}

main()
{
    int flag = 1;
    create(flag);
    display(flag);
    flag++;
    create(flag);
    display(flag);
    multiplicaion_polynomial();
    addup();
    display_multiplication();

}

