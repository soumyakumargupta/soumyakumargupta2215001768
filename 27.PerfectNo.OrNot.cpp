//PERFECT NO. OR NOT
#include <stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter a no. for checking PERFECT NUM OR NOT: ");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
	if(n==sum)
		printf("PERFECT NO.");
	else
		printf("NOT A PERFECT NO.");
}
