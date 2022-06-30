#include<stdio.h>

int main()
{
    int check,a[100],area[100],ran,i,j,k,l,max,prev,next;

    printf("Enter the number of the values in the histogram: ");
    scanf("%d",&ran);

    printf("Enter the Histogram Data: \n");
    for(i=0;i<ran;i++)
    {
        scanf("%d",&a[i]);
    }

    i=0;
    j=0;

    for(i=0;i<ran;i++)
    {

        check = a[i];
        if(i==0)
        {

            k=0;
            next = 1;
            while(next<ran)
            {

                if(check<=a[next])
                {
                    k++;
                }
                else
                    break;

               next++;
            }
            area[j++] = check*(k+1);
        }

        else if(i<(ran-1))
        {

            k=0;
            l=0;
            next = i+1;
            prev = i-1;

            while(next<ran)
            {
                if(check<=a[next])
                {
                    k++;
                }
                else
                    break;

                next++;
            }

            while(prev<i&&prev>=0)
            {
                if(check<=a[prev])
                {
                    l++;

                }
                else
                {
                    break;
                }

                prev--;
            }

            area[j++]=(check*(k+l+1));
        }

        else if(i==(ran-1))
        {
            k=0;
            prev = i-1;

            while(prev<i&&prev>=0)
            {
                if(check<=a[prev])
                {
                    k++;

                }
                else
                    break;

                prev--;
            }

            area[j++] = check*(k+1);
        }
    }

    max = area[0];
    for(i=0;i<j;i++)
    {
        if(max<area[i])
        {
            max = area[i];
        }
    }

    printf("%d",max);
}
