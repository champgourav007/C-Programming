#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nodetype
{
    char data;
    struct nodetype *next;
}stk;
stk *top=NULL;
stk *p;
int max=0;
char push(char ele)
{
    stk *temp;
    temp = (stk*)malloc(sizeof(stk));
    if (temp == NULL)
    {
        printf("Overflow\n");
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
   stk *t;
   int i=0,count=0,flag=1;
   char str[100000],val,some;
   gets(str);
   while(str[i]!='\0')
   {
     val=str[i];

     if(val=='('||val=='{'||val=='[')
            {
                max = 1;
                push(val);
            }
     else if(val==')'||val=='}'||val==']')
     {
         if(top==NULL)
         {
             top=1;
             count++;
             break;
         }
         t = top;
         some = t->data;
         if(val==')')
         {
             val='(';
         }
         else if(val=='}')
         {
             val='{';
         }
         else if(val==']')
         {
             val='[';
         }

         if(some!=val)
         {
             count++;
             break;
         }
         if(some==val)
         {
             pop();
         }

     }
     count++;
     i++;

   }
   if(top==NULL)
   {
       printf("\nSuccess\n");
   }
   else{
    printf("\n%d\n",count);
   }

}

