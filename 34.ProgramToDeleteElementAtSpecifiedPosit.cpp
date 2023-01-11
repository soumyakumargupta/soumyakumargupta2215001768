//Program To Delete An Element In Array At Specified Position
#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
    int i, size, pos;
    printf("Enter size of the array : ");	//Input size and element in array
    scanf("%d", &size);
    for(i=0; i<size; i++){
    	printf("Enter the value of index[%d]: ",i);
        scanf("%d", &arr[i]);
	}
    printf("Enter the element position to delete : ");//Input element position to delete
    scanf("%d", &pos);
    if(pos < 0 || pos > size){	//Invalid delete position
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{		//Copy next element value to current element
        for(i=pos-1; i<size-1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nElements of array after delete are : ");//Print array after deletion
        for(i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
