//PRIME no. or not
#include <stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter a no. to check whether PRIME no. or not: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count=count+1;
		}
		
	}
	if(count==2)
				printf("PRIME NO.");
	else
				printf("NOT PRIME NO.");
}
		
