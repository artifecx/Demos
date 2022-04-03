/*Problem Description:
Welcome to Calendars Inc.! As you can already tell, our company is involved in the production of calendars every year. 
We are in need of a program that would change the landscape of calendar making forever! 
Your job is to make a program that would determine whether the year we inputted is a leap year or not.

A year is considered a leap year when it is either:
(a) divisible by 4, but not 100 or
(b) divisible by both 4, 100, and 400 at the same time

Implement the following functions:
int getYear();
int isLeapYear();
void display();*/

#include<stdio.h>
int getYear();
int isLeapYear(int);
void display(int);

int main(){
	int year = getYear();
	int l = isLeapYear(year);
	display(l);
	return 0;
}
int getYear(){
	int y;
	printf("Enter Year: ");
	scanf("%d", &y);
	return y;
}
int isLeapYear(int year){
	if(year%4==0 && year%100>=1)
		return 1;
	else if(year%4==0 && year%100 && year%400 == 0)
		return 1;
	else
		return 0;
}
void display(int l){
	if (l==1)
		printf("Leap Year");
	else if (l==0)
		printf("Not a Leap Year");
}