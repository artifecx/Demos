/*Problem Description:
We humans celebrate the day we were born. 
There's nothing special about being on the same place in the earth's orbit 
as when you were born -- but that's not the gist of it. 
We celebrate the success, the lessons learned, 
the experiences we get for living a year and we wish for another great year ahead of us!

Given a date of birth and the number of years n, 
print out the date to which the person will celebrate his nth birthday.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char date[100];
	printf("Enter date of birth: ");
	scanf("%[^\n]", date);

	int n;
	printf("Enter number of years: ");
	scanf("%d", &n);

	char* string = strrchr(date, ' ');
	int year = atoi(string) + n;

	*(string)= '\0';

	printf("\nYou will reach the age of %d on %s %d.", n, date, year);

	return 0;
}