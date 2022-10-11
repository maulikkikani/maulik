#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,c,d;
  clrscr();
  printf("enter value of a=");
  scanf("%d",&a);
  printf("enter value of b=");
  scanf("%d",&b);
  printf("enter value of c=");
  scanf("%d",&c);
  printf("enter value of d=");
  scanf("%d",&d);
  (a>b)
       ?(a>c)

	  ?(a>d)
	      ? printf("A is max...")
	      : printf("D is max...")

	   :(a>d)
	      ? printf("C is max...")
	      : printf("D is max..."):

  (b>c)

       ?(b>d)
	   ? printf("B is mmax...")
	   : printf("D is max...")

       :(c>d)
	   ? printf("C is max...")
	   : printf("D is max...");


      getch();

}
