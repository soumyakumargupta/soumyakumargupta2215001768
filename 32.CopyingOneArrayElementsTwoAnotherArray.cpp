//Program To Copy One Array Elements To Another Array
#include<stdio.h>
int main(){
	int n,j,i,sum=0;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	printf("You Entered:....");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		b[i]=a[i];
	}
	printf("\nArray after copying:....");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
