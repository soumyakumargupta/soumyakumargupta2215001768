/*Pascal's  Triangle Printing			
			1
		1		1
	  1 	2	 1
	1	3		3	1
   1    4   6   4     1	*/
#include<stdio.h>
int main(){
	int row,i,j,space,coef=0;
	printf("Enter the size of rows: ");
	scanf("%d",&row);
	for(i=0;i<row;i++){		//For Space Printing
		for(space=1;space<=row-i;space++){
			printf(" ");}
	for(j=0;j<=i;j++){			//For No. Printing
				if(j==0 || i==0)
					coef=1;
				else
					coef=coef*(i-j+1)/j;
					printf(" %d",coef);
			}
			printf("\n");		//For New Line
		}
	return 0;
}
