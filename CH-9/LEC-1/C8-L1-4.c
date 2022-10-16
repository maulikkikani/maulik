#include<stdio.h>

main()
{
	int j=0,i,n1,n2;
		
	printf("how many elements a : ");
	scanf("%d",&n1);
	
	int a[n1];
	
	for(i=0; i<n1; i++)
    {
    	printf("a[%d]=",i);
    	scanf("%d",&a[i]);
	}
	
	printf("\n\n array a is :\n\n");
	
	for(i=0; i<n1; i++)
	{
		printf("%d ",a[i]);
    }
    
    int b[n2];
    
	printf("\n\nhow many elements b[] : ");
	scanf("%d",&n2);
	
	for(i=0; i<n2; i++)
    {
    	printf("b[%d]=",i);
    	scanf("%d",&b[i]);
	}
	
	printf("\n\n array b is :\n\n");
	
	for(i=0; i<n2; i++)
	{
		printf("%d ",b[i]);
    }
    
    for(i=0; i<n1; i++)
    {
    	j=a[i]+b[i];
    	printf("\narray sum is : %d\n",j);
    	
	}
		
}
