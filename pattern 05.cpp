//Program To Print Right Triangle Star Pattern
#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter value of n: ");		// Input number of rows from user */
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){		/* Print i number of stars */
            printf("*");
        }
        printf("\n");		/* Move to next line */	
    }
    return 0;
}
