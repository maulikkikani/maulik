#include<stdio.h>
#include<conio.h>

main()
{
   int i=2000,n;
   clrscr();
   printf("ENTER ENDING POINT:-");
   scanf("%d",&n);
   do
   {
      if(i%4 == 0)
      {
	printf("%d ",i);
      }
       i++;
   }while(i<=n);
   getch();
}