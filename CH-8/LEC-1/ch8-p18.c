#include<stdio.h>

main()
{
	int n=4;
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}
