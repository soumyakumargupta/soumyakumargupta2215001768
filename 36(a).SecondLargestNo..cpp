//Program To Find Second Largest No.
#include<stdio.h>
int main(){
   int i,j,a,n,counter,ave,number[30];
   printf ("Enter the limit: ");
   scanf ("%d",&n);
   
   for (i=0; i<n; ++i){
   	printf ("Enter the value of index%d: ");
      scanf ("%d",&number[i]);}
   for (i=0; i<n; ++i){
      for (j=i+1; j<n; ++j){
         if (number[i] < number[j]){
            a = number[i];
            number[i] = number[j];
            number[j] = a;
         }
      }
   }
   printf ("The numbers arranged in descending order are:\n");
   for (i=0; i<n; ++i)
      printf ("%10d",number[i]);
   printf ("\nThe 2nd largest number is = %d", number[1]);
   printf ("\nThe 2nd smallest number is = %d", number[n-2]);
   ave = (number[1] +number[n-2])/2;
   counter = 0;
   for (i=0; i<n; ++i){
      if (ave==number[i])
         ++counter;
   }
   if (counter==0)
      printf("\nThe average of 2nd largest & 2nd smallest is not in the array");
   else
      printf("\nThe average of 2nd largest & 2nd smallest in array is %d in numbers", counter);
}
