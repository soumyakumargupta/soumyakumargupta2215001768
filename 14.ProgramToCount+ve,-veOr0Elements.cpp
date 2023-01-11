//COUNT +V , -V, Zero 
#include<stdio.h>
int  main(){
	int n,i,count=0,flag=0,red=0;
	printf("Enter the size of an array: ");		//Taking Size Of An Array
	scanf("%d",&n);
	int  a[n];
	for(i=0;i<n;i++){		//Taking Value Of Elements
		printf("Enter the value for index%d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			count++;
		}
		else if(a[i]<0){
			flag++;
		}
		else {
			red++;
		}
	}
	printf("Total no. of +v no. is:%d\nTotal no. of -v no. is:%d\nTotal no. of 0 no. is:%d",count,flag,red);
}
