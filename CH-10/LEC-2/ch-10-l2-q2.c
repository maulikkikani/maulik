#include<stdio.h>
#include<string.h>

main()
{
	char password[100];
	 printf("Enter the password:");
	gets(password);
	int ch=0,dig=0,mm=0;
	int i;
   for(i=0; i<strlen(password); i++)
   {
   	if(password[i] >= 65 && password[i] <= 90 || password[i] >= 97 && password[i]<= 122 )
		{
		     ch++;	
		} 
		else if(password[i] >= 48 && password[i] <= 57)
		{
			dig++;
		}
		else
		{
			mm++;
		}
	}
	if(ch>0 && dig>0 && mm==1)
	{
		printf("your pass is valide:");
	}
	else
	{
		printf("Your pass is not valide \n ");
		
		
	}
}
