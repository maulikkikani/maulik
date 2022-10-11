#include<stdio.h>
#include<conio.h>
main()
{
     int n,HRT,DA,TA,ans;

     clrscr();
     printf("enter your salery=");
     scanf("/d",&n);
     HRT=n+(10/100);
     DA=n+(8/100);
     TA=n+(5/100);
     ans=n+HRT+DA+TA;
     printf("your ans=%d",ans);
     getch();
}
