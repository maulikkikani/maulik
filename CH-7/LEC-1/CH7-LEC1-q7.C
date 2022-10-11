#include<stdio.h>
#include<conio.h>

main()
{
 int i = 2000,n;
 clrscr();
 printf("Enter ending point : ");
 scanf("%d",&n);

 while(i<=n)
 {
   if(i%4 == 0)
   {
     printf("%d ",i);
    }
     i++;
 }

 getch();
}
