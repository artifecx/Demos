/* Problem Description:
I am a doctor and my son’s a freshman Computer Science student. 
He asked for help on conversion of decimal to binary. 
Can you help me to do a program that automatically converts decimal to binary?  
You have been tasked to make a program that will automatically convert decimal digits to binary digits. 
This is great! You could help someone to learn more things.

Implement the following functions:
int getNum();
long decBin();
void display();

Use only for loop.*/

#include<stdio.h>
int getNum();
long decBin(int);
void display(long,int);

int main(){
	int n = getNum();
	long d = decBin(n);
	display(d,n);
	return 0;
}

int getNum(){
	int num;
	printf("Enter decimal number: ");
	scanf("%d",&num);
	return num;
}

long decBin(int n){
	long b,r,fn=1;
	for(b=0; n!=0; n/=2){
		r=n%2;
		b=b+r*fn;
		fn=fn*10;
	}
	return b;
}

void display(long binary, int n){
	printf("%d is \"%ld\" in binary", n,binary);
}