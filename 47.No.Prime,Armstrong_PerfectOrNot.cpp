//Program To Check A No. Is Armstrong, Perfect, And Prime Or nOT
#include <stdio.h>
#include <math.h>
int isPrime(int num);	//Function declarations 
int isArmstrong(int num);
int isPerfect(int num);
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPrime(num)){	  // Call isPrime() functions
        printf("%d is Prime number.\n", num);
    }
    else{
        printf("%d is not Prime number.\n", num);
    }
    if(isArmstrong(num)){		 // Call isArmstrong() function
        printf("%d is Armstrong number.\n", num);
    }
    else{
        printf("%d is not Armstrong number.\n", num);
    } 
    if(isPerfect(num)){	// Call isPerfect() function
        printf("%d is Perfect number.\n", num);
    }
    else{
        printf("%d is not Perfect number.\n", num);
    } 
    return 0;
}
int isPrime(int num){//* Check whether a number is prime or not. 						
    	int i;		//* Returns 1 if the number is prime otherwise 0.
    for(i=2; i<=num/2; i++){
        if(num%i == 0){
            return 0;}} 
    return 1; 
}

int isArmstrong(int num){	//Check whether a number is Armstrong number or not.
    int lastDigit, sum, originalNum, digits;//Returns 1 if the number is Armstrong number otherwise 0.
    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;	//Find total digits in num
    while(num > 0){  //Calculate sum of power of digits
    lastDigit = num % 10; // Extract the last digit
	sum = sum + round(pow(lastDigit, digits));// Compute sum of power of last digit
    num = num / 10;	// Remove the last digit
    } 
    return (originalNum == sum);
}
int isPerfect(int num){		 //Check whether the number is perfect number or not. 
    int i, sum, n;			 //Returns 1 if the number is perfect otherwise 0.
    sum = 0;
    n = num;
    for(i=1; i<n; i++){  // If i is a divisor of num 
        if(n%i == 0){  
            sum += i;  
        }} 
    return (num == sum);
}
