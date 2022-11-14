#include<stdio.h>

int add(int a,int b)
	{
		return a+b;
	}
int sub(int a,int b)
	{
		return a-b;
	}
int multi(int a,int b)
	{
		return a*b;
	}
int div(int a,int b)
	{
		return a/b;
	}

main()
{
	int n,choice;
	int a,b,answer;
    printf("press for 1 add :-\n");
    printf("press for 2 sub :-\n");
    printf("press for 3 multi :-\n");
    printf("press for 4 div :-\n");
	do{
	
	printf("What You Need : ");
	scanf("%d",&n);

	
	switch(n)
	{
		if(n>=1 && n>=5)
		
	    printf("Enter Value A: ");
	    scanf("%d",&a);
    	printf("Enter Value B: ");
	    scanf("%d",&b);
		case 1 :
					answer = add(a,b);
					printf("Answer = %d\n ",answer );
				 	break;				 
		case 2 :
					answer = sub(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 3 :
					answer = multi(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 4 :
					answer = div(a,b);
					printf("Answer = %d\n ",answer );
					break;
		case 5 :
					printf("exit your calculerot");
					break;
	}
	
	}while(n!=5);

}


