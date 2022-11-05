#include<stdio.h>
#include<string.h>

main()
{
	char E_mali[100];
	printf("Enter the E_mali:");
	gets(E_mali);
	int ch=0,dig=0,at=0;
	int i;
   for(i=0; i<strlen(E_mali); i++)
   {
   	if(E_mali[i] >= 65 && E_mali[i] <= 90 || E_mali[i] >= 97 && E_mali[i]<= 122 )
		{
		     ch++;	
		} 
		else if(E_mali[i] >= 48 && E_mali[i] <= 57)
		{
			dig++;
		}
		else if (E_mali[i] == '@')
		{
			at++;
		}
	}
	if(ch>0 && dig>0 && at==1)
	{
		printf("your E_mali is valide:");
	}
	else
	{
		printf("Your E_mali is not valide \n pelase enter new password:");
		
		
	}
}
