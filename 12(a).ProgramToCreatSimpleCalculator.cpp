//Program To Create Simple Calculator Using Switch Case
#include<stdio.h>
 int main(){
 	float a,b,c;
 	char ch;
 	printf("Enter first no.: ");
 	scanf("%f",&a);
 	printf("Enter second no.: ");
 	scanf("%f",&b);
 	printf("Enter user choice to perform operations: ");
 	scanf("%s",&ch);
 	switch(ch){
 		case '+':c=a+b;
 				printf("Sum of %f & %f is: %0.2f",a,b,c);
 				break ;
     	case '-':c=a-b;
 				printf("Difference of %f & %f is: %0.2f",a,b,c);
 				break ;
		case '*':c=a*b;
 				printf("Multiplications of %f & %f is: %0.2f",a,b,c);
 				break ;
		case '/':c=a/b;
 				printf("Division of %f & %f is: %0.2f",a,b,c);
 				break ;
		default :printf("Invalid operations!!");
				break; 	
	}
}

