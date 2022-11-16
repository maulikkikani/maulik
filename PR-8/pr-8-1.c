#include<stdio.h>

void main()
{
	int i,j;
	int *m,*v,k;
	
	printf("Enter the value of m :- ");
	scanf("%d",&i);	
	printf("Enter the value of v :- ");
	scanf("%d",&j);
	printf("The value of a & b before swapping \na = %d\nb = %d\n",i,j);
	
	m=&i;
	v=&j;
	
	k=*v;
	*v=*m;
	*m=k;
	
	printf("The value of a & b after swapping \na = %d\nb = %d\n",i,j);
}
