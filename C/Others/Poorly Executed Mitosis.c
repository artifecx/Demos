/*Problem Description:
A mitosis program has gone out of hand and now does abnormal cell duplication. 
Rather than scrapping the project, the researchers decided to observe and predict the cell duplication using a program.
We are tasked to create a program that predicts the state of a cell after n iterations.

The program would ask the user for 3 inputs:
Base integer
Initial factor
Number of times to process

It works like this:
The initial factor is multiplied with the base integer
The product of step 1 would be multiplied again with the base integer
We keep on doing this depending on the number of times to process.*/

#include<stdio.h>
int getResult(int, int, int);
int main(){
	int base, initial, times;
	printf("Enter base integer: ");
		scanf("%d", &base);
	printf("Enter initial factor: ");
		scanf("%d", &initial);
	printf("Enter number of times to process: ");
		scanf("%d", &times);

    int result = getResult(base, initial, times);
	printf("Result = %d", result);

	return 0;
}

int getResult(int base, int initial, int times){
	if(times==0){
		return initial;
	} 
	else{
		return base*getResult(base, initial, times-1);
	}
}