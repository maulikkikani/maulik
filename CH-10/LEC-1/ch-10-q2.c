#include<stdio.h>
#include<string.h>

main()
{
	char name[13];
	
	printf("Enter your Name :-");
	scanf("%s",&name);
	int i;
	
	for(i=0;i<13;i++)
	{
		name[i] +=32;
	}
	printf("%s",name);
}
