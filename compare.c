// C Program to compare two string without using strcmp

#include<stdio.h>
#include<string.h>

int main()
{
	char string1[100],string2[100];
	int i,flag=0;
	
	printf("Enter the String1 : ");
	gets(string1);
	
	printf("Enter the String2 : ");
	gets(string2);
	
	if(strlen(string1)!=strlen(string2))
		{	
			flag=1;
		}
	
	else
	{
		for(i=0; string1[i]!='\0' || string2[i]!='\0'; i++)
		{
		
			if(string1[i]!=string2[i])
			flag=1;
			break;		
		}		
    }
    
	if(flag==1)
		printf("Strings are not equal");
	else
	    printf("Strings are equal");
	
	return 0;
}
