#include<stdio.h>
#include<stdlib.h>

void calc(int,int,int *);
int main(void) 
{
	struct data
	{
		char SerialNumber[10];
		char Name[20];
		int HourlyHour;
		int WorkingHours;
		int MonthlyIncome;
	}Servitor;

	printf("serial number:");
	gets(Servitor.SerialNumber);
	printf("name:");
	gets(Servitor.Name);
	printf("hourly hour:");
	scanf("%d",&Servitor.HourlyHour);
	printf("working hours:");
	scanf("%d",&Servitor.WorkingHours);
	
	printf("\n_________________________________________________________");
	printf("\n");
	printf("\n");
	
	calc(Servitor.WorkingHours,Servitor.HourlyHour,&Servitor.MonthlyIncome);

	printf("serial number:%s\n",Servitor.SerialNumber);
	printf("name:%s\n",Servitor.Name);
	printf("hourly hour:%d\n",Servitor.HourlyHour);
	printf("working hours:%d\n",Servitor.WorkingHours);
	printf("monthly income:%d\n",Servitor.MonthlyIncome);

	return 0;
}

void calc(int a,int b,int *c)
{
	*c = a * b ;
}
