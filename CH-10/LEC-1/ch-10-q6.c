#include<stdio.h>
#include<string.h>

main()
{
	char a;
	
	printf("Enter any character :-");
	scanf("%s",&a);
	int i;
	
	if(a>=65 && a<=90)
	{
		a += 32;
	}
	else if(a>=97 && a<=122)
	{
		a -= 32;
	}
	printf("Toggle value %c",a);
}
