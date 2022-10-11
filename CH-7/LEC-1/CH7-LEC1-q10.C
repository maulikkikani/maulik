#include<stdio.h>
#include<conio.h>

main()
{
 int i = 1,n;
 clrscr();
 printf("which multiplication table you wont : ");
 scanf("%d",&n);

 while(i<=10)
 {
     printf("%d * %d = %d\n",n,i,(n*i));
     i++;
 }

 getch();
}
