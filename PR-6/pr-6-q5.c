#include<stdio.h>
main()
{
	char sm[50][50];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		printf("Enter name %d = ",i+1);
		gets(sm[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;sm[i][j]!='\0';j++)
		{
			printf("%c",sm[i][j]);
		}
		printf("\n");
	}
}
