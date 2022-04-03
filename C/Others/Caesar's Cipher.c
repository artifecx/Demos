/*Problem Description:
Caesar Cipher is one of the easiest encryption systems where a letter is encrypted to be represented by 3 letters after it. 
Say given the letter 'A', it will be encrypted to show 'D' instead. 
The letter 'B' will then be encrypted to 'E', 'C' to 'F' and so on. 
For the letters 'X', 'Y', and 'Z', they will be encrypted back to 'A', 'B', and 'C', respectively.

Given a string composed of capital letters, small letters, and spaces, output its corresponding Caesar cipher message.*/

#include<stdio.h>
int main(){
	char arr[100];
	printf("Enter message: ");
	fgets(arr,100,stdin);
    
	printf("Cipher: ");
	for(int i=0;arr[i]!='\0';i++){
		if((arr[i]>='X' && arr[i]<='Z') || (arr[i]>='x' && arr[i]<='z'))
			printf("%c", arr[i]-23);
		else if((arr[i]>='A' && arr[i]<='W') || (arr[i]>='a' && arr[i]<='w'))
			printf("%c", arr[i]+3);
		else if(arr[i]==' ')
			printf(" ");
	}
    
	return 0;
}