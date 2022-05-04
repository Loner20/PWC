#include <stdio.h>

void main()
{
	int choice;
	void minmax(int a[],int n);
	void fibonacci(int n);
	void factorial(int n);
	void perfect(int n);
	
	printf("Enter 1 for maximum or minimum\nEnter 2 for Perfect Number\nEnter 3 for Factorial of a number\nEnter 4 for Fibonacci Series\nEnter a number :");
	scanf("%d",&choice);
    switch (choice)
    {
	    case 1:
        int a[100],n,i;
        printf("Enter size of the array :");
        scanf("%d",&n);
        printf("Enter element in array :");
        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        minmax(a,n);
        break;
        case 2:
        int num;
        printf("Enter any number to check Perfect Number \n");  
        scanf("%d", &num);  
        perfect(num);
        break;
        case 3:
        int f;
        printf("enter an integer:");
        scanf("%d",&f);
        factorial(f);
        break;
        case 4:
        int z;    
        printf("Enter the number of elements: ");    
        scanf("%d",&z);    
        printf("Fibonacci Series: ");    
        printf("%d %d ",0,1);       
        fibonacci(z-2);
        break;
        default:
        printf("Wrong Input\n");
        break;
    }
	
}
//min max
void minmax(int a[],int n)
{

int max,min,i;
min=max=a[0];
for(i=1;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
		if (max<a[i])
			max=a[i];
	}
	printf("minimum of array is : %d",min);
	printf("\nmaximum of array is : %d",max);
}

//fibonacci
void fibonacci(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
    {
		n3 = n1+n2;
		n1= n2;
		n2=n3;
		printf("%d ",n3);
		fibonacci(n-1);
	}
}

//factorial
void factorial(int n)
{
	int i, fact =1;
	if (n<0)
	printf("Error: Factorial of a negative number doesn't exist ");
	else
	{
		for(i=1;i<=n;i++)
        {
			fact=fact*i;
		}
	    printf("Factorial of %d = %d",n,fact);
	}
}

//Perfect Number
void perfect(int n)
{
    int i = 1, Sum = 0;  
    
    while(i < n )  
    {  
        if(n % i == 0)  
        Sum = Sum + i;  
        i++;  
    }  
    if(Sum == n)
    {
        printf("\n %d is Perfect Number", n);
    }     
    else
    {  
        printf("\n %d is not a Perfect Number", n);  
    }
}
