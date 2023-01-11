//Calculate Electricity Bill 
#include<stdio.h>
int main(){
	int unit;
	float  total;
	printf("Enter your electricity unit consumption: ");
	scanf("%d",&unit);
	if(unit <= 50)
		total=unit*0.5;
	else if(unit<=150)
		total=(50*0.5)+((unit-50)*0.75);
	else if(unit<=250)
		total=(50*0.5)+(100*0.75)+(100*1.2)+((unit-250)*1.5);
	printf("Your total bill is: Rs.%f",total);
	return 0;
}
