//ARMSTRONG NUM OR NOT 
#include <stdio.h>
int main(){
	int n,temp,rem,c,sum=0;
	printf("Enter the no. to check whether armstrong or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		c=rem*rem*rem;
		sum=sum+c;
		n=n/10;
	}
	n=temp;
	if(n==sum){
		printf("ARMSTRONG");
	}
	else{
		printf("NOT AN ARMSTRONG");
	}

	
}
