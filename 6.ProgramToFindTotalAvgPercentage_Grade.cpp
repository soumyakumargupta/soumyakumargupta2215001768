//Program To Find Total, Average, Percentage & Grade Of Five Subjects Marks
#include<stdio.h>
int main(){
	int a,b,c,d,e,total,avg,p;
	printf("Enter marks of first subject: ");
	scanf("%d",&a);
	printf("Enter marks of second subject: ");
	scanf("%d",&b);
	printf("Enter marks of third subject: ");
	scanf("%d",&c);
	printf("Enter marks of fourth subject: ");
	scanf("%d",&d);
	printf("Enter marks of fifth subject: ");
	scanf("%d",&e);
	total=a+b+c+d+e;
	avg=total/2;
	p=total/5;
	printf("Total=%d\nAverage=%d\nPercentage=%d%c",total,avg,p,37);
	if(p<=100 && p>=90){
		printf("Grade=A!!");
	}
	else if(p<=89 && p>=80){
		printf("Grade=B!!");
	}
	else if(p<=79 && p>=60){
		printf("Grade=C!!");
	}
	else if(p<=59 && p>=40){
		printf("Grade=	D!!");
	}
	else if(p<=39 && p>=27){
		printf("Grade=E!!");
	}
	else 
	printf("Better Luck Next Time!!");
	return 0;
}







