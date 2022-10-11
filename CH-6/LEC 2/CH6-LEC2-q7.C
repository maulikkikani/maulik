#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);
	(a>b)
	       ?(a>c)
			?(a>d)
				?(a>e)
					?printf("a is max.")
					:printf("e is max.")
				:(d>e)
					?printf("d is max.")
					:printf("e is max.")

			:(c>d)
				?(c>e)
					?printf("c is max.")
					:printf("e is max.")
				:(d>e)
					?printf("d is max.")
					:printf("e is max.")

	       :(b>c)
			?(b>d)
				?(b>e)
					?printf("b is max.")
					:printf("e is max.")
				:(d>e)
					?printf("d is max.")
					:printf("e is max.")

			:(c>d)
				?(c>e)
					?printf("c is max.")
					:printf("e is max.")
				:(d>e)
					?printf("d is max.")
					:printf("e is max.");



	getch();
}