#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct vert
{
    int vertex;
    struct vert *add_adj;
    struct vert *next_vertex;
}v;
v *start_vertex = NULL;
v *temp_v;
v *ptr_v;

typedef struct adj
{
    int  node;
    int weight;
    struct adj *next_adj;
}a;

a *start_adj = NULL;
a *temp_adj;
a *ptr_adj;

void node_vertex()
{

    temp_v = (v*)malloc(sizeof(v));
    if(temp_v==NULL)
        return;

    else
    {
        printf("Enter the Vertex data: ");
        scanf("%d",&temp_v->vertex);
        if(start_vertex==NULL)
        {
            start_vertex = temp_v;
            ptr_v = temp_v;
        }
        else
        {
            temp_v->next_vertex = ptr_v;
            ptr_v = temp_v;
        }
        ptr_v->next_vertex = NULL;
    }

    node_adj();
}

void node_adj()
{
    int i=0;
    do
    {
        temp_adj = (a*)malloc(sizeof(a));
        printf("\nPress 0 to Exit\n    OR     \nEnter the Adjacency vertex of %d: ",ptr_v->vertex);
        scanf("%d",&temp_adj->node);

        printf("Enter the Weight between %d vertex to %d vertex: ",ptr_v->verttex,ptr_adj->node);
        scanf("%d",&temp_adj->weight);

        if(i==0)
        {
            ptr_v->add_adj = temp_adj;
            ptr_adj = temp_adj;
        }
        else
        {
            ptr_adj->next_adj = temp_adj;
            ptr_adj = temp_adj;
        }
        ptr_adj->next_adj=NULL;
        i++;
    }
    while(temp_adj->node!=0);
}



int main()
{
    node_vertex();
}

