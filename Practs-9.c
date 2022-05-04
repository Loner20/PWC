#include<stdio.h>
#include<string.h>
void main()
{
    char a[25];
    char b[25];
    char tmp;
    int res, len, mid ,i ;
    printf("Enter First String :");
    scanf("%s",a);
    printf("Enter Second String :");
    scanf("%s",b);

    res=strcmp(a ,b);
    if (res==0)
        printf("String are the same");
    else
        printf("\nString are not the same");

    strcat(a ," ");
    strcat(a, b);
    printf("\nConcatenation of both Strings : %s ",a);

    len=strlen(a);
    mid=len/2;

    for (i=0; i<mid; i++)
    {
        tmp=a[len -1 -i];
        a[len -1 -i]=a[i];
        a[i]=tmp;
    }

    printf("\nReversed String : %s\n",a);

}