//Count Frequency Of A Given String
#include<stdio.h>
int main(){
	char str[20],a;
	int c=0,i;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character to count its frequency: ");
	scanf("%c",&a);
	for(i=0;str[i]!='\0';i++){
		if(a==str[i]){
			c++;
		}				
	}
	printf("%c occur %d times.",a,c);
	return 0;
}
