#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();
    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    printf("enter value of c=");
    scanf("%d",&c);
    (a>b)
	 ?(a>c)
	     ?printf("A is max...")
	     :printf("C is max...")
	  :(b>c)
	     ?printf("B is max...")
	     :printf("C is max...");

 getch();
}