#include<stdio.h>

void main()
{
	FILE *f1;
	char n[100];
	char str[] = "maulik kikani";
	int i;
	
	f1 = fopen("maulik 1.txt","a");
	
	for(i=0; str[i] != '\n'; i++)
	{
		fputs(str[i],f1);
	}
	
	fclose(f1);
}
