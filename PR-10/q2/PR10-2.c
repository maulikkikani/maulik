#include<stdio.h>

void main()
{
	FILE *p1;
	int a;
	p1  = fopen("C:\\Users\\Dell 7480\\Desktop\\maulik.txt","r");
	
	fscanf(p1,"%d", &a);
	printf("Value From File : %d", a);
	
	fclose(p1);
}
