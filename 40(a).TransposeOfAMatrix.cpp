//Find Out Transpose Of A Matrix
#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the size of rows: ");			//Taking Size Of Rows & Column
	scanf("%d",&n);
	printf("Enter the size of column: ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){				//Inputing Values Of Elements
		for(j=0;j<m;j++){
			printf("Enter the value of index%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Array Transpose Are!!\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
