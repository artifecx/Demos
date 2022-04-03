/*Problem Description:
In order to preserve Spiderman's last words, 
Mr. Stark wants us to create a program that takes a string and output the string 
with each proceeding output having one less character until it outputs only one string.*/

#include<stdio.h>
#include<string.h>
#define STR_MAX_SIZE 100
void preserveString(char*, int);
int main(){
	char str[STR_MAX_SIZE];

	printf("Enter string: ");
	fgets(str, STR_MAX_SIZE, stdin);

	preserveString(str, strlen(str));

	return 0;
}

void preserveString(char *str, int size){
	if(size > 0){
		for(int i = 0; i < size - 1; i++){
			printf("%c", str[i]);
		}
		printf("\n");

		preserveString(str, size-1);
	}
}