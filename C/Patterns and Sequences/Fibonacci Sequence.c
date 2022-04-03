//1 1 2 3 5 8 13 21 34 55...

#include<stdio.h>
int main(){
	int n;
	ASK:printf("Enter n: ");
		scanf("%d", &n);

	int n1=1, n2=1;
	int nth=n1+n2;

	if(n<1 || n==1) 
		goto ASK;
	else 
		printf("Fibonacci numbers = %d %d ", n1,n2);

	for(int i=4; i<=n+1; i++){
		if(n<3)
			break;
		else{
			printf("%d ", nth);
			n1=n2;
			n2=nth;
			nth=n1+n2;
		}
	}

	return 0;
}