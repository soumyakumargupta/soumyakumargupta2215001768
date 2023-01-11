//Check Whether A Matrix Is Identity Matrix Or Not
#include<stdio.h>
int main(){
	int a[2][2],i,j,flag=0;
	for(i=0;i<2;i++){				//Taking Values Of Matrix
		for(j=0;j<2;j++){
			printf("Enter the value of inedx%d%d of Matrix1: ",i,j);
			scanf("%d",&a[i][j]);
		}}
		
	for(i=0;i<2;i++){		//Checking Identity Matrix Or Not
		for(j=0;j<2;j++){
			if(i==j && a[i][j]==1){
				flag=1;
			}
			else if(i!=j && a[i][j]!=1)
				    flag=0;
		}}
	if(flag==1){
		printf("IDENTITY MATRIX!!");
	}
	else{
		printf("NOT A IDENTITY MATRIX!!");
	}
}
