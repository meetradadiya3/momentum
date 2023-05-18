#include<stdio.h>

main()
{

char week;

 
 printf("enter week char(S,M,T,W,t,F,s):-");

 scanf("%c", &week);

 switch(week)
 { 
  case 'S' :
  	printf("Sunday");
	break;
	
  case 'M' :
  	printf("Monday");
	break;
	
  case 'T' :
  	printf("Tuesday");
	break;
	
  case 'W' :
  	printf("Wednesday");
	break;	
	
  case 't' :
  	printf("Thursday");
	break;
	
  case 'F' :
  	printf("Friday");
	break;		
	
  case 's' :
  	printf("Saturnday");
	break;
		
 } 
}


