#include<stdio.h>
#include<conio.h>

main()
{
   int i=1,n;
   clrscr();
   printf("Which multiplication table You Wont :-");
   scanf("%d",&n);
   printf("\n------------------------\n");
   do
   {
       printf("%d * %d = %d\n",n,i,(n*i));
       i++;
   }while(i<=10);
   getch();
}