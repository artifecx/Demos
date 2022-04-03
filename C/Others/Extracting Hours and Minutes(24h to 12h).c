/*Problem Description:
Write a program that will accept an integer value from 0000 to 2359. 
It will then extract the first 2 values of the integer to be the hours, and the last 2 to be the minutes.
Then print its 12-hour counterpart.

Implement the following functions:
int findHour();
int findMin();
void display();*/

#include<stdio.h>
int findHour(int);
int findMin(int);
void display(int,int,int);

int main(){
	int t;
	ASK:printf("Enter 24-Hour Time: ");
		scanf("%d",&t);
	if(t>2400 || t<0)
		goto ASK;  
	int hour = findHour(t);
	int min = findMin(t);
	display(t,hour,min);
	return 0;
}
int findHour(int t){
	int h;
	h=t/100;
	if(h>12)
		h-=12;
	if(h==0)
		h+=12;
	return h;
}
int findMin(int t){
	int m;
	m=t%100;
	return m;
}
void display(int t, int hour, int min){
	t/=100;
	if(t<=12)
		printf("12-Hour Format: %d:%02dAM", hour,min);
	else
		printf("12-Hour Format: %d:%02dPM", hour,min);
}