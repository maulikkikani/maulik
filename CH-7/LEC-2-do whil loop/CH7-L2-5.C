#include<stdio.h>
#include<conio.h>
main()
{
	int i=1, n;
	clrscr();
	printf("enter ending point=");
	scanf("%d",&n);
	do
	{
	   if(i%2==1)
	   {
		printf("%d ",i);
	   }
	   i++;

	} while(i<=n);
	getch();


}