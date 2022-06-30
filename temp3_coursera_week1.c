#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}stk;
stk *temp;
stk *top=NULL;
int *p;

int push(int ele)
{
    temp = (stk*)malloc(sizeof(stk));
    if(temp==NULL)
    {
        printf("Underflow");
        return 0;
    }
    else
    {
       temp->data = ele;
       temp->next = top;
       top = temp;
    }
}

int pop()
{
    if(top ==  NULL)
    {
        printf("Underflow\n");
        return 0;
    }
    else
    {
        p = top;
        top = top->next;
        free(p);
    }
}

int main()
{
    int ran,i=-1,ser;
    char str[100000];
    scanf("%d",&ran);
    while(i<ran)
    {

        gets(str);
        i++;
        if(str[2]=='s')
        {
            push(str[5]);
        }
    }

}
