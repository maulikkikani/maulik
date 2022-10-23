#include<stdio.h>
#include<conio.h>

main()
{
 int n , fac = 1;
 clrscr();
 printf("which numbers factorial you wont : ");
 scanf("%d",&n);

 while(n>=1)
 {
   fac *= n;
   n--;
 }
 printf("factorial is %d",fac);
 getch();
}
