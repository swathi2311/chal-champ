//program to print numbers on users input using for loop
//program as per turbo c complier

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,limit,a[200];
	clrscr()
	printf("enter the limit to print numbers\n");
	scanf("%d",&limit);
	for(i=1;i<limit;i++)
	{
		print("%d",i);
	}
	getch();
}
  
