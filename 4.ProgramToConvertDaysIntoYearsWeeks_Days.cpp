//Program To Convert Days Into Year Weeks & Days
#include<stdio.h>
int main(){
	int a,years,weeks,days;
	printf("Enter the total days: ");
	scanf("%d",&a);
	years=a/365;
	weeks=(a%365)/7;
	days=a-((years*365)+(weeks*7));
	printf("%d = %d years, %d weeks, %d days\n",a,years,weeks,days);
}
	
