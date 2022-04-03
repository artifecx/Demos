/*Problem Description:
We will be giving you a phrase and all you need to do is sort each character in a word alphabetically.

Enter the phrase: this is a sample problem
Output: hist is a aelmps belmopr*/

#include<stdio.h>
#include<string.h>
void word_sort(char*);
void letter_sort(char*, int);
int main(){
	char phrase[100];
	printf("Enter the phrase: ");
	scanf("%[^\n]", phrase);
  
	word_sort(phrase);

	return 0;
}

void word_sort(char* phrase){
	char* space=strchr(phrase, ' ');
  
	int flag=0;
	if(space==NULL){
		space=strchr(phrase, '\0');
		flag=1;
	}
  
	int length = space - phrase;
	letter_sort(phrase, length);
  
	if(flag==1)
		return;

	printf(" ");
	word_sort(space+1);
}
void letter_sort(char* phrase, int length){
	for(int i=0; i<length; i++){
		char small = phrase[0];
		int index = 0;
		for(int j=1; j<length; j++){
			if(phrase[j]<small){
				small=phrase[j];
				index=j;
			}
		}
		printf("%c", small);
		phrase[index]='{';
	}
}
