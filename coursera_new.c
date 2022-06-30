#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
    char data;
    struct node *next;
}n;

n *top = NULL;
n *ptr;
n *temp;

void push(char val)
{
    temp = (n*)malloc(sizeof(n));
    if(temp==NULL)
    {
        return;
    }
    else
    {
        temp->data = val;
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    if(top==NULL)
    {
        return;
    }

    else
    {
        ptr = top;
        top = top->next;
        free(ptr);
    }
}

void max()
{
    char max,some;
    ptr = top;
    max = ptr->data;
    while(ptr!=NULL)
    {
        some = ptr->data;
        if(max<some)
            max = some;

        ptr = ptr->next;
    }
    printf("%c\n",max);
}

int main()
{
    int range,i,j;
    char str1[1000000],str[1000];

    scanf("%d",&range);
    for(i=0;i<=range;i++)
    {
        gets(str1);
        if(str1[2]=='s')
        {
            str[0] = str1[5];
            j=5;
            while(str1[j]!=NULL)
            {
                strcat(str,str1[j]);
                j++;
            }
            push(str);
        }
        else if(str1[2]=='p')
        {
            pop();
        }
        else if(str1[2]=='x')
        {
            max();
        }
    }
}
