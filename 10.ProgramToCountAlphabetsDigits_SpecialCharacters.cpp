//Program To Count Alphabet, Digits & Special Character Using Conditional Operator
#include<stdio.h>
int main(){
	char str[20];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i]<='Z')
				c1++;
		else if(str[i]>='a' && str[i]<='z')
				c2++;
		else if(str[i]>='0' && str[i]<='9')
				c3++;
		else 
			c4++;
	}
	printf("Capital alphabets=%d\nSmall alphabets=%d\nDigits=%d\nSpecial character=%d",c1,c2,c3,c4);
	return 0;
}

