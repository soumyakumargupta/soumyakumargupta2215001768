//Scalar Matrix  Multiplication
#include <stdio.h>
#define SIZE 3 // Maximum size of the array
int main(){
    int num,n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	printf("Enter the value of index%dx%d: ",i,j);
            scanf("%d",&A[i][j]);
        }}
    printf("Enter any number to multiply with matrix A: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            A[i][j]=num*A[i][j];
        }}
    printf("\nResultant matrix c.A = \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
