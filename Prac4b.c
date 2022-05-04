#include<stdio.h>  
#include<math.h>
 void main()    
{    
int n,r,sum=0,temp,count=0,digit=0,num;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n; 

num=n;

while(num!=0)
{digit=num%10;
 count=count+1;
 num=num/10;
}

   
while(n!=0)    
{    
r=n%10;    
sum=sum+pow(r,count);     
n=n/10;    
 } 
 
if(temp==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    

}   
