//KRISHNAMURTI NUM OR ROBINSON NO OR STRONG NO.
#include<stdio.h>
int main(){
	int n,temp,rem,fact,sum=0;
	printf("Enter a no. for checking whether km or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		fact=1;
		while(rem>0){
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		n=n/10;
	}
	//temp=n;
	if(temp==sum)
	 	printf("STRONG NO.");
	else
		printf("NOT A STRONG NO.");
}
