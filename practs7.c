#include <stdio.h>
#include <string.h>


struct student
{                  //structure will allocate memory based on  no.of data types defined 
    int rollno;    // here, int(4) + char name[60] = 64 bytes memory 
    char name[60];
}s1;               //declaring s1 variable for structure 

union student1
{
    int rollno;    //union will allocat memoery based on the largest data type
    char name[60]; // from both variable,here it is used from int < char name[60]
}u1;               //declaring u1 variable for union


void main()
{
    s1.rollno=1;
    strcpy(s1.name,"Kushal");
    printf("Name : %s\n",s1.name);
    printf("Rollno : %d\n",s1.rollno);
    
    u1.rollno=10;
    strcpy(u1.name,"Senghani");
    printf("Name : %s\n",u1.name);
    printf("Rollno : %d\n",u1.rollno);

    printf("\n size of structure : %d\n ", sizeof(s1));
    printf(" size of union : %d\n ", sizeof(u1));

}