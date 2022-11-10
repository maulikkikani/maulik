#include<stdio.h>

int arraysum(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
void main()
{
	int n;
	printf("Enter Langth of array :-");
	scanf("%d",&n);
	int a[n],i,add;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	add = arraysum(a,n);
	printf("sum of array %d",add);
}
