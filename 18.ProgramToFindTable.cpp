//TABLE USING FOR LOOP
#include <stdio.h>
int main(){
	int n,i;
	printf("Enter a num to find its table: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d*%d=%d\n",n,i,n*i);
	}
	
}
