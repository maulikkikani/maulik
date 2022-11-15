#include <stdio.h>
#include <string.h>
 
int main()
{
    char m[1000];  
    int i;
 
    printf("Enter The String :- ");
    gets(m);
    
 
     
    for(i=0;m[i];i++)  
    {
        if(m[i]>=65 && m[i]<=90)
         m[i]+=32;
        else if(m[i]>=97 && m[i]<=122)
         m[i]-=32; 
 	}
 	
     
    printf("string in togglecase = %s\n",m);
 
 
    return 0;
}
