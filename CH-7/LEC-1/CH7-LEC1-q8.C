#include<stdio.h>
#include<conio.h>

main()
{
 int i = 1,n,sum = 0;
 clrscr();
 printf("Enter ending point : ");
 scanf("%d",&n);

 while(i<=n)
 {
   printf("%d ",i);
   sum += i;
   i++;
 }
 printf("\nsum of all digits is : %d",sum);
 getch();
}
