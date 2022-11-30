
#include<stdio.h>

void main()
{
	
	FILE *m1,*m2;
	
	m1 = fopen("C:\\User\\Dell 7480\\Desktop\\maulik 1.txt","r");
	m2 = fopen("C:\\Users\\Dell 7480\\Desktop\\maulik 2 .txt","w");
	int a;
	fscanf(m1,"%d",&a);
	
	fprintf(m2,"Value Is : %d\n",a);
}
