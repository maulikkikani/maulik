#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("enter ending point=");
	scanf("%d",&n);
	do
	{
	   printf("%d\t\n",i);
	   i++;
	} while(i<=n);
	getch();


}