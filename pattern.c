//program to print pattern

#inlcude<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1;i<8;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    for(i=1;i<8;i++)
    {
        for(j=8;j<i;j++)
        {
            printf("*\t");
        }
        printf("\t");
    }
    getch();
 }
  
