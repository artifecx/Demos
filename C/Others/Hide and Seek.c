/*Problem Description:
Your friend asked you to write a code that would determine the digit in the integral part given a floating point number and the integral position. 
For example, the given number is 1234.567, given position is 2(position starts from right to left). 
So the digit is 3, because position 1 in the integral part is 4, position 2 is 3, position 3 is 2 and position 4 is 1.

You are required to implement the following functions:
float getNum();
int getPos();
int determineNum();
void display();

Do not use arrays*/

#include<stdio.h>
float getNum();
int getPos();
int determineNum(float,int);
void display(int);

int main(){
	float num = getNum();
	int pos = getPos();
	int n = determineNum(num, pos);
	display(n);
	return 0;
}
float getNum(){
	float num;
	printf("Enter the number: ");
	scanf("%f", &num);
	return num;
}
int getPos(){
	int pos;
	printf("Enter the integral position: ");
	scanf("%d", &pos);
	return pos;
}
int determineNum(float num, int pos){
	int a = num*1, d=1, m=10, n;
	for(int i=0; i<pos; i++){
		if(i==0) 
			n=a%m;
		else 
			n=a%m/d;
		m*=10;
		d*=10;
	}
	return n;
}
void display(int n){
	printf("Decimal value at integral position = %d", n);
}