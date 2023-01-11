//SUM OF AN ARRAY ELEMENTS

#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("The sum of elements of an array are:%d ",sum);
}
