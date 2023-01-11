//Bubble Sort Program
#include <stdio.h>
int main(){
    int arr[50], num, x, y, temp;  
    printf("Enter the size of an array: ");
    scanf("%d",&num);   
    for(x=0;x<num;x++){		//Taking Value Input
    	printf("Enter the value of index%d: ",x);
    	scanf("%d",&arr[x]);
	}
    x=0;
    while(x<num-1){
        y=0;        
        while(y<num-x-1){		
            if(arr[y]>arr[y+1]){		//Swapping
                temp=arr[y];
                arr[y]=arr[y + 1];
                arr[y+1]=temp;
            }
            y++;
        }       
        x++;
    }   
    printf("Array after implementing bubble sort: ");
    for(x=0;x<num;x++)
        printf("%d  ",arr[x]);
    return 0;
}
