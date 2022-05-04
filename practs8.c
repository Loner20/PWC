#include <stdio.h>
void main()
{
    int num1 ,num2;
    int *a, *b;
    a= & num1;
    b= & num2;
    printf("Enter value of Num1 : ");
    scanf("%d",&num1);
    printf("Enter value of Num2 : ");
    scanf("%d",&num2);

    printf("\n Before Swapping num value, num1 = %d and num = %d \n",*a,*b);
    printf("\n Address before swapping, num %u and num %u \n",a,b);

    int t;

    t=num1;
    num1=num2;
    num2=t;
    //a= & num1;
    //b= & num2;
    printf("\n After Swapping num value,num1 = %d and num = %d \n",*a,*b);
    printf("\n Address after swapping, num %u and num %u \n",a,b);

}