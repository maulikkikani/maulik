#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();
	printf("enter any character=");
	scanf("%c",&a);
	if((a>='a' && a<='z')|| (a>='A' && a<='Z'))
	{
	    printf("%c'is alphabet.. ",a);
	}
	else if(a>='0' && a<='9')
	{
	    printf("%c' is digit...",a);
	}
	else
	{
	    printf("%c' is special character...",a);
	}

	getch();


}