//PROGRAM TO PRINT NATURAL NO. AND FIND ITS SUM
#include <stdio.h>
int main(){
	int n,i,c=0;	
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		c=c+i;
	}	
	printf("\nThe sum no. till end is: %d",c);
	return 0;
}
