#include <iostream>
#include <string.h>
using namespace std;
void prefixSuffixArray(char *pat, int M, int *pps)
{
    int length = 0;
    pps[0] = 0;
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[length])
        {
            length++;
            pps[i] = length;
            i++;
        }
        else
        {
            if (length != 0)
                length = pps[length - 1];
            else
            {
                pps[i] = 0;
                i++;
            }
        }
    }
    for (int i = 0; i < M; i++)
    {
        cout<<pps[i];
    }
    
}
// ababbabbabbababbabb
int main(){
    char p[100];
    int m = 19;
    for (int i = 0; i < m; i++)
    {
        cin>>p[i];
    }
    
    int pps[19];
    prefixSuffixArray(p,m,pps);
}