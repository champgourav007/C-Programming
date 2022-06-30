#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int g[MAX][MAX],temp[MAX][MAX];
int k_mat[MAX][MAX]={0};
int a1[MAX],a2[MAX],k=0;

void graph(int row)
{
    int i,j,some;
    int col;
    col = row;
    printf("Enter the Weight of: ");
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf("%d -> %d:- ",i,j);
            scanf("%d",&g[i][j]);
            temp[i][j] = g[i][j];
        }
        printf("\n");
    }
}

void printgraph(int row)
{
    int i,j;
    int col;
    col = row;
    printf("Matrix of the Graph:\n");

    for(i=0;i<=row;i++)
    {
        for(j=0;j<=col;j++)
        {
            printf(" %d ",temp[i][j]);
        }
        printf("\n");
    }
}

void krushkal(int row)
{
    int i,j,check,val,l;

    for(i=0;i<=row;i++)
    {
        for(j=0;j<=row;j++)
        {
            val= g[i][j];

            if(val!=0)
            {
                k_mat[i][j] = val;
                g[j][i] = 0;
                l=i;

                if(l>0)
                {
                    l=l-1;
                    while(l>=0)
                    {
                        check = k_mat[l][j];

                        if(check>val&&check!=0)
                        {
                            k_mat[l][j] = 0;
                            k_mat[i][j] = val;
                        }
                        else if(check<=val&&check!=0)
                        {
                            k_mat[i][j] = 0;
                            k_mat[l][j] = check;
                        }
                        l--;
                    }
                }
            }
        }
    }

}

void print_krushkal(int ran)
{
    int i,j,val,weight_sum=0,flag;

    for(i=0;i<=ran;i++)
    {
        for(j=0;j<=ran;j++)
        {
            val = k_mat[j][i];

            if(val!=0)
            {
                a1[k++]=j;
                a2[k++]=i;
                flag = check(k,i,j);
                if(flag==0)
                {
                    printf("Distance from %d -> %d is %d\n",j,i,val);
                    //if()
                    weight_sum += val;
                }
            }
        }
    }

    printf("\nMinimum Cost:- %d",weight_sum);
}

void check(int k,int l,int i,int j)
{
    int flag =0;
    k=k-2;
    while(k>=0)
    {
        if(a1[k]==i&&a2[k]==j)
            flag = 1;
        k--;
    }

    return flag;

}


int main()
{
    int range;

    printf("Enter the total number of nodes: ");
    scanf("%d",&range);

    graph(range);
    printgraph(range);
    krushkal(range);
    print_krushkal(range);
}
