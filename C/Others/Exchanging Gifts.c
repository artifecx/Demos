/*Problem Description:
It's Christmas time and we're having this exchanging gifts activity!
I want to surprise the receiver of my gift. 
After they receive my gift, I will add an additional $100 bill!*/

#include<stdio.h>
void exchangeGift(int*, int*);
int main(void){
	int a, b;
	printf("Enter integer 1: ");
	scanf("%d", &a);
	printf("Enter integer 2: ");
	scanf("%d", &b);
	
	exchangeGift(&a, &b);
	printf("%d %d", a,b);
	
	return 0;
}

void exchangeGift(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp+100;
}