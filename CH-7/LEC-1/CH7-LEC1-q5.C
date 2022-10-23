#include<stdio.h>
#include<conio.h>

main()
{
 int i = 1,n;
 clrscr();
 printf("Enter ending point : ");
 scanf("%d",&n);

 while(i<=n)
 {
   if(i%2 == 1)
   {
     printf("%d ",i);
    }
     i++;
 }

 getch();
}
