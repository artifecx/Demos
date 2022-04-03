//1 1 2 3 5 8 13 21 34 55...

#include<stdio.h>
int getFibonacci(int);
int main(void){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
    
	for(int i = 1; i <= n; i++){
		printf("%d ", getFibonacci(i));
	}

	return 0;
}

int getFibonacci(int x){
	if(x == 1 || x == 2){
		return 1;
	} 
	else{
		return getFibonacci(x-1) + getFibonacci(x-2);
	}
}