#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   clrscr();
   printf("enter of a=");
   scanf("%d",&a);
   printf("enter of b=");
   scanf("%d",&b);;
   printf("enter of c=");
   scanf("%d",&c);

   if(a > b)
   {
      if(a > c)
      {
	  printf("a is big....");
      }
      else
      {
	   printf("c is big...");
      }
   }
   else
   {
      if(b > c)
      {
	   printf("b is big...");
      }
      else
      {
	   printf("c is big...");
      }

   }

   getch();
}
