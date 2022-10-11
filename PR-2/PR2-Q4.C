#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	clrscr();
	printf("press m  for monday\n");
	printf("press T  for tuesday\n");
	printf("press w  for wednesday\n");
	printf("press t  for thursday\n");
	printf("press f  for firday\n");
	printf("press S  for saturday\n");
	printf("press s  for sunday\n");
	printf("enter your choice=");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 'm':printf("monday");break;
	  case 'T':printf("tuesday");break;
	  case 'w':printf("wednesday");break;
	  case 't':printf("thursday");break;
	  case 'f':printf("firday");break;
	  case 'S':printf("saturday");break;
	  case 's':printf("sunday");break;
	  defult: printf("invalid choice");
	}

	getch();
}