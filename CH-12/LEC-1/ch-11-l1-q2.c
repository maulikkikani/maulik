#include<stdio.h>

int main()
{
	int i,j,*m1,*m2,m;
	
	printf("Enter The Value Of A :-");
	scanf("%d",&i);
	printf("Enter The Value Of B :-");
	scanf("%d",&j);
	printf("Before the swapping\nm1 = %d\nm2 = %d\n",i,j);
	
	m1=&i;
	m2=&j;
	
	m=*m2;
	*m2=*m1;
	*m1=m;
	
	printf("After the swapping \nm1 = %d\nm2 = %d\n",i,j);
}
