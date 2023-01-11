//Checking A String Is Palindrom Or Not.....Without Using String Functions
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,flag=0,len;
	printf("Enter the string to check palindrome or not: ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]!=str[len-i-1]){
			flag=1;
			break;
	}
}
	if(flag==0)
		printf("PALINDROME!!");
	else
		printf("NOT A PALINDROME!!");
}

