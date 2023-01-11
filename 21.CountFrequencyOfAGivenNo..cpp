//COUNT FREQUENCY OF A GIVEN ARRAY
#include<stdio.h>
int main(){
	int n,i,key,count=0;
	printf("Enter the size of an array: ");		//Taking Sixe Of An Array
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to count its frquency: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			count++;
	}
	}
	printf("The element occur %d times!!",count);
}
