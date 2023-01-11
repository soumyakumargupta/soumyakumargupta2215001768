//Program To Print Square Star Pattern
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no. of rows: ");		//Taking Limit Input
	scanf("%d",&n);
	for(i=1;i<=n;i++){		//For Rows
		for(j=1;j<=n;j++){		//For Columns
			printf("* ");
		}
		printf("\n");		//For New Line
	}
	return 0;
}
