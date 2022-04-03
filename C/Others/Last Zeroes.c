/* Problem Description:
How many zeroes are there after the last non-zero digit of a million? a trillion? 
To easily identify that, let us make a program to count and print the number of zeroes after the last non-zero digit of a number. 
For example, in 20400, there are 2 zeroes after the last non-zero digit of the number, 4.

Do not use arrays*/

#include<stdio.h>
int main(){
  
	int n;
    
	printf("Enter n: ");
	scanf("%d",&n);

	int count=0;
	while(n){
		int temp=n;
		temp%=10;
		n/=10;
        
		if(temp==0)
			count++;
		else
			break;
	}

	printf("Last zeroes count = %d", count);

	return 0;
}