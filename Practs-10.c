#include<stdio.h>
#include<string.h>
void main()
{
    FILE *filepointer;
    char datatobeWritten[100] = "Hello";
    filepointer = fopen("FileOperation.txt" ,"w");
    if (filepointer == NULL)
    {
        printf("FileOperation.txt failed to open");
    }
    else
    {
        printf("The File Is now Opened \n");
        if ( strlen ( datatobeWritten ) > 0)
        {
            fputs(datatobeWritten, filepointer);
            fputs("\n",filepointer);
        }
        fclose(filepointer);
        printf("Data Successfully written in File\n");
        printf("The File is now closed");
    }
}