/*Hey! Haven't we met? Your name is...
Oh just write your name in her hand! 
But let's say he did -- and he wrote his full name, too! 
Now you need to find his name in the phonebook.

From the given name, output the last name.
Assume that the names will always have only one word.*/

#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	printf("Name: ");
	scanf("%[^\n]", name);
  
	char* string = strrchr(name, ' ');
  
	printf("Last Name: %s", string+1);
 
	return 0;
}