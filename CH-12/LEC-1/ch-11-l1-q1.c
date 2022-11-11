#include<stdio.h>

int main()
{
	int a, area = 0;
	int *mk;
	printf("Enter the value = ");
	scanf("%d",&a);
	mk = &a;
	area = (*mk)*(*mk);
	printf("value scqur is %d",area);
}
