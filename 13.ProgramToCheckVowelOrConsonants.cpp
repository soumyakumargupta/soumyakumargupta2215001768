//Program To Check Vowel Or Consonamts Using Switch Case
#include<stdio.h>
int main(){
	char ch;;
	printf("Enter a alphabet: ");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
		switch(ch){
			case 'A':
				case 'E':
					case 'I':
						case 'O':
							case 'U':
			case 'a':
				case 'e':
					case 'i':
						case 'o':
							case 'u':
			printf("%c is a Vowel!!....",ch);
			break ;
			default: 
					printf("%c is a Consonant!!....",ch);		
		}
	}
	else 
		printf("\n %c is not an alphabet!! ",ch);
		return 0;
}
