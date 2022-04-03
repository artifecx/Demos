/*Problem Description:
I love facts. In fact, I dream a lot about facts. 
Ever since I was a kid, all I ever think of are facts. And that's a fact!
I don't know if that made any sense to you but I think you know about factorials, hmm? 
In Mathematics, a factorial of a number is the product of all the numbers from 1 up to that number. 
There is one exception though and that is the factorial of 0 which is 1.*/

#include<stdio.h>
int getFactorial(int);
int main(void) {
	int n;
	printf("Enter n: ");
		scanf("%d", &n);

	printf("Factorial of %d is %d", n, getFactorial(n));

	return 0;
}

int getFactorial(int n){
	if(n<=1)
		return 1;
	else
		return n*getFactorial(n-1);
}