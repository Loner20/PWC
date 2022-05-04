#include<stdio.h>

int main()
{ double num1,num2,ans;
  int n;

printf("please enter the respective number for the opertaion u want to perform\n");
printf("1)area of circle\n");
printf("2)area of square\n");
printf("3)area of sphere\n");
printf("4)area of rectangle\n");
scanf("%d",&n);
switch(n)
{ case 1:{printf("enter radius of a circle\n");
	scanf("%lf",&num1);
	ans=3.1415*num1*num1;
	printf("area of circle is %lf\n",ans);
	break;}
  case 2:{printf("enter length of a side of a square\n");
	 scanf("%lf",&num1);
	 ans=num1*num1;
	 printf("area of square is %lf\n",ans);
	 break;}
  case 3:{printf("enter radius of a sphere\n");
	 scanf("%lf",&num1);
	 ans=4*3.1415*num1*num1;
	 printf("area of sphere is %lf\n",ans);
	 break;}
  case 4:{printf(" enter length and breadth of a rectangle\n");
	 scanf("%lf%lf",&num1,&num2);
	 ans=num1*num2;
	 printf("area of rectangle is %lf\n",ans);
	 break;}

  default: printf("invalid option");
   }
  return 0;
  }
