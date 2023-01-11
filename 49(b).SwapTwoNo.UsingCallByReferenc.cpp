//Swap Two No. Using Call By Reference
#include <stdio.h>
void swap(int * num1, int * num2);//Swap function declaration
int main(){
    int num1, num2;
    printf("Enter two numbers: ");//Input numbers
    scanf("%d%d", &num1, &num2);
    printf("Before swapping in main n");//Print original values of num1 and num2 
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
    swap(&num1, &num2); //Pass the addresses of num1 and num2
    printf("After swapping in main n");	//Print the swapped values of num1 and num2 
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);
    return 0;
}
void swap(int * num1, int * num2){	// Function to swap two numbers
    int temp;
    temp = *num1; // Copy the value of num1 to some temp variable
    *num1= *num2;	// Copy the value of num2 to num1
    *num2= temp;	// Copy the value of num1 stored in temp to num2
    printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}
