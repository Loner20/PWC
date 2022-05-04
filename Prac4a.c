#include<stdio.h>
void main()
{
	int n,r,rev,orgnum ;
	printf("Enter the number:");
	scanf("%d",&n);
	orgnum=n;
	
	while(n!=0)
	{r=n%10;
	rev=rev*10+r;
	n/=10;
		}
		
	if(orgnum==rev)
	  printf("%d is a palindrome",orgnum);
	else 
	 printf("%d is not a palindrome",orgnum);		
}
