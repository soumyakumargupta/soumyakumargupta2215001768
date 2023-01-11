//Program To Remove Duplicate Element In An Array
#include <stdio.h>
#define MAX_SIZE 100  // Maximum array size
int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;
    printf("Enter size of the array : "); 	//Taking Size Of AN Array
    scanf("%d",&size);
    for(i=0;i<size;i++){			//Taking Value Of Element IN An Array 
    	printf("Enter the value of index%d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){		//Checkm For Duplicate Element
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
    return 0;
}
