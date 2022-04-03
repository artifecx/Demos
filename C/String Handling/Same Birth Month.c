/*Problem Description:
Don't you get excited when you know someone and it turns out you were born on the same month? 
You can really feel some kind of connection with them just by knowing you share the same birth month.

Given two strings - one contains my birthday 
and another is somebody else's - output "OMG SAME" 
when you have the same birth month, or "That's sad" when you don't.

Input follows: Month Day, Year (e.g. May 29, 1453)*/

#include<stdio.h>
#include<string.h>
int main(){
	char date[100];
	printf("My birthday: ");
	scanf("%[^\n]", date);
	
	char date2[100];
	printf("Their birthday: ");
	scanf(" %[^\n]", date2);

	printf("\n");
	if(strncmp(date,date2, 3)) //compares first three letters since every month is unique
		printf("That's sad");
	else
		printf("OMG SAME");
  
	return 0;
}