/*Problem Description:
Given a string of both uppercase and lowercase letters, print the most frequent letter or letters in the string in uppercase. 
Consider both letters in uppercase and lowercase as a single letter (i.e. the count of 'a' and 'A' is combined and treated the same).*/

#include<stdio.h>
#include<ctype.h>
int main(){
	char string[100];
	printf("Enter string: ");
	scanf("%[^\n]", &string);
  
	int array[26] = { 0 };
	for(int i=0; string[i]!='\0'; i++){
		char ch=string[i];
		int index;
		if(isupper(ch))
			index=ch-'A';
		else if(islower(ch))
			index=ch-'a';
		else 
			continue;
		
		array[index]++;
	}
  
	int largest=0;
	for(int i=0; i<26; i++){
		if(largest<array[i])
			largest=array[i];
	}
	
	printf("Most frequent letter/s:\n");
	for(int i=0; i<26; i++){
		if(largest==array[i])
			printf("%c\n", i+'A');
	}

	return 0;
}