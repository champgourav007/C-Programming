#include<stdio.h>
#include<stdlib.h>
main()
{
	create();
	display();
}

typedef struct nodetype
{
	int data;
	struct nodetype *next;
}node;

node *start = NULL;
node *ptr, *temp;

void create()
{
	int i=1,ch;
	do
	{
		temp = (node*)malloc(sizeof(node));
		if(temp == NULL)
		{
			printf("Underflow\n");
		}
		printf("Enter the data into the %d node: \n",i);
		i++;
		scanf("%d",&temp->data);

		if(start == NULL)
		{
			start = temp;
			ptr = temp;
		}
		else
		{
			ptr->next = temp;
			ptr = ptr->next;
		}

		printf("Enter 1 to continue else enter 2 to FINISH!!\n");
		scanf("%d",&ch);
		if(ch!=2&&ch!=1)
		{
			printf("Enter 1 to continue else enter 2 to FINISH!!\n");
			scanf("%d",&ch);
		}
	}
	while(ch!=2);

	ptr->next = NULL;

}

void display()
{
	ptr = start;

	while(ptr!=NULL)
	{
		printf(" %d ",ptr->data);
		ptr = ptr->next;
	}
}
