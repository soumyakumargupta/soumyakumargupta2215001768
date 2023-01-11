//CHECKING NO. IS EVEN OR ODD
#include <stdio.h>
int main(){
	int n,c=0,i;
	printf("Enter the limit: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
	if(i%2==0){
		printf("\n%d",i);
		c=c+i;
		}
	}
	printf("\nThe sum of even no. till end is: %d",c);
	return 0;
}
