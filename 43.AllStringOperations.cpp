//All String Operations
# include <stdio.h>
# include <string.h>
int main(){
char str1[40], str2[40] ;
printf("Enter the first string : ") ;
gets(str1) ;
printf("Enter the second string : ") ;
gets(str2) ;
printf("\nString 1 = %s & String 2 = %s ", str1, str2) ;
printf("\nUppercase is : %s and %s", strupr(str1), strupr(str2));
printf("\nLowercase is : %s and %s", strlwr(str1), strlwr(str2));
printf("\nReverse is : %s and %s", strrev(str1), strrev(str2)) ;
printf("\nString copy is : %s ", strcpy(str1,str2));
printf("\nConcatenation is : %s ", strcat(str1,str2));
return 0;
}

