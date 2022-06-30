#include<stdio.h>
main()
{
    char alphabet,choice;
    printf("Enter any alphabet to know whether it is vowel or not\n");
    scanf("%c",&alphabet);
    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':printf("%c is the vowel",alphabet);
    default :printf("%c is not the vowel",alphabet);

    }

}
