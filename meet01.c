#include<stdio.h>

main()

{
	char ch;
	printf("enter the char=");
	scanf("%c",&ch);
	if(ch>='a'&& ch<='z')
	{
		printf("%c is alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is digit");

	}
	else
    {
    	printf("%c is special char",ch);
    	
    	
	}
}
