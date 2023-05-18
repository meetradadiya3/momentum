#include<stdio.h>

 main()
{
	int ebill, units,sc,total;
	printf("Enter the units =");
	scanf("%d",&units);

	if(units<=50)
	{
		ebill=units*0.50;
	}
	else if(units<=150)
	{
		ebill=0.75+25*(units-50);
	}
	else if(units<=250 )
	{
		ebill=1.20+100*(units-150);
	}

	else
	{
		ebill=1.5+220*(units-250);
	}
	printf("ElectricityBill=%d Rupees\n",ebill);
	sc=ebill*20/100;
	total=ebill+sc;
	printf("total Electricity Bill=%d Rupees",total);
}
