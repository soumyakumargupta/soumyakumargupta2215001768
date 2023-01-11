//Copy Array Using Pointers
#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size
void printArray(int arr[], int size);//Function declaration to print array *
int main(){
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;
    int *source_ptr = source_arr;   // Pointer to source_arr
    int *dest_ptr   = dest_arr;     // Pointer to dest_arr
    int *end_ptr;
    printf("Enter size of array: ");//Input size and elements in source array
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++){
        scanf("%d", (source_ptr + i));
    }
    end_ptr = &source_arr[size - 1];// Pointer to last element of source_arr
    printf("\nSource array before copying: ");//Print source and destination array before copying
    printArray(source_arr, size);
    printf("\nDestination array before copying: ");
    printArray(dest_arr, size);
    while(source_ptr <= end_ptr){//Run loop till source_ptr exists in source_arr
        *dest_ptr = *source_ptr;// memory range.
        source_ptr++;		//Increment source_ptr and dest_ptr
        dest_ptr++;
    }
    printf("\n\nSource array after copying: ");// Print source and destination array after copying 
    printArray(source_arr, size);
    printf("\nDestination array after copying: ");
    printArray(dest_arr, size);
    return 0;
}
void printArray(int *arr, int size){//Function to print array elements.
    int i;							//@arr     Integer array to print.
    for (i = 0; i < size; i++){	//@size    Size of array.
        printf("%d, ", *(arr + i));
    }
}
