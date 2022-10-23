#include<stdio.h>
#include<conio.h>

main()
{
   int n,fac=1;
   clrscr();
   printf("Which Numbers Factoaial You Wont :-");
   scanf("%d",&n);
   printf("\n------------------------\n");
   do
   {
       fac*=n;
       n--;
   }while(n>=1);
   printf("\nfactorial is :- %d",fac);
   getch();
}