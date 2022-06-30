#include<stdio.h>
#include<stdlib.h>
struct node{
    int coeff,expo;
    struct node *next;
}*head1,*head2,*head3;


void createpoly1(int n1);
void display1();
void createpoly2(int n2);
void display2();
void polyadd();
void display();

int main()
{
    int n1,n2;
    printf("Enter the number of terms in the polynomial 1:");
    scanf("%d",&n1);
    createpoly1(n1);
    printf("POLYNOMIAL 1\n");
    display1();
    printf("Enter the number of terms in polynomial 2:");
    scanf("%d",&n2);
    createpoly2(n2);
    printf("POLYNOMIAL 2\n");
    display2();
    printf("Addition of two polynomials:\n");
    polyadd();
    printf("Final polynomial:\n");
    display();
    return 0;

}

void createpoly1(int n1)
{
    struct node *temp,*ptr;
    int i,expo,coeff;
    head1=(struct node*)malloc(sizeof(struct node));
    if(head1==NULL)
    {
        printf("Polynomial is empty");

    }
    printf("Enter the exponent and coefficient:");
    scanf("%d%d",&expo,&coeff);
    head1->coeff=coeff;
    head1->expo=expo;
    head1->next=NULL;

    temp=head1;
    for(i=2;i<=n1;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr!=NULL)
        {
            printf("Enter the coefficient and exponent:");
            scanf("%d%d",&coeff,&expo);
            ptr->coeff=coeff;
            ptr->expo=expo;
            ptr->next=NULL;

            temp->next=ptr;
            temp=temp->next;
        }
    }
}
void createpoly2(int n2)
{
    struct node *temp,*ptr;
    int i,expo,coeff;
    head2=(struct node*)malloc(sizeof(struct node));
    if(head2==NULL)
    {
        printf("Polynomial is empty");

    }
    printf("Enter the exponent and coefficient:");
    scanf("%d%d",&expo,&coeff);
    head2->coeff=coeff;
    head2->expo=expo;
    head2->next=NULL;

    temp=head2;
    for(i=2;i<=n2;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        if(ptr!=NULL)
        {
            printf("Enter the coefficient and exponent:");
            scanf("%d%d",&coeff,&expo);
            ptr->coeff=coeff;
            ptr->expo=expo;
            ptr->next=NULL;

            temp->next=ptr;
            temp=temp->next;
        }
    }
}

void polyadd()
{
    struct node *ptr1,*ptr2,*ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr1=head1;
    ptr2=head2;
    head3=ptr;
    if(ptr1->expo>ptr2->expo)
    {
        ptr->coeff=ptr1->coeff;
        ptr->expo=ptr1->expo;
        ptr1=ptr1->next;
    }
    else if(ptr2->expo>ptr1->expo)
    {
        ptr->coeff=ptr2->coeff;
        ptr->expo=ptr2->expo;
        ptr2=ptr2->next;
    }
    else
    {
        ptr->coeff=ptr1->coeff+ptr2->coeff;
        ptr->expo=ptr1->expo;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        if(ptr1->expo>ptr2->expo)
        {

            temp->coeff=ptr1->coeff;
            temp->expo=ptr1->expo;
            ptr1=ptr1->next;
        }
        else if(ptr2->expo>ptr1->expo)
        {
            temp->coeff=ptr2->coeff;
            temp->expo=ptr2->expo;
            ptr2=ptr2->next;
        }
        else
        {
            temp->coeff=ptr1->coeff+ptr2->coeff;
            temp->expo=ptr1->expo;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr->next=temp;
        ptr=temp;
    }
    while(ptr1!=NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=ptr1->coeff;
        temp->expo=ptr1->expo;
        ptr->next=temp;
        ptr=temp;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=ptr2->coeff;
        temp->expo=ptr2->expo;
        ptr->next=temp;
        ptr=temp;
        ptr2=ptr2->next;
    }
    ptr->next=NULL;
}
void display1()
{
    struct node *temp;

    if(head1==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        temp=head1;

        while(temp!=NULL)
        {
            printf("%dx^%d \n",temp->coeff,temp->expo);

            temp=temp->next;
            if(temp!=NULL)
                printf("+");
        }

    }
}
void display2()
{
    struct node *temp;

    if(head2==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        temp=head2;

        while(temp!=NULL)
        {
            printf("%dx^%d \n",temp->coeff,temp->expo);

            temp=temp->next;
            if(temp!=NULL)
                printf("+");
        }

    }
}



void display()
{
    struct node *temp;

    if(head3==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        temp=head3;

        while(temp!=NULL)
        {
            printf("%dx^%d\n",temp->coeff,temp->expo);

            temp=temp->next;
            if(temp!=NULL)
                printf("+");
        }

    }
}
