#include<stdio.h>
#include<conio.h>

main()
{
   int i=1,n,sum=0;
   clrscr();
   printf("ENTER ENDING POINT:-");
   scanf("%d",&n);
   printf("\n------------------------\n");
   do
   {
       printf("%d ",i);
       sum+=i;
       i++;
   }while(i<=n);
   printf("\n---------------------------\n");
   printf("\nsum of all digits is :- %d",sum);
   getch();
}