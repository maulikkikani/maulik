#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();
  printf("enter value of A=");
  scanf("%d",&a);
  if (a > 0)
  {
    printf("a is positive");
  }
  else if(a==0)
  {
       printf("a is nutral");
  }
  else
  {
      printf("a is nagtive");
  }

  getch();

}
