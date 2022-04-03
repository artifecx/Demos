/*Problem Description:
Snake and Ladders is a multiplayer board game where players race their way to the finish line while encountering lucky ladders and cursed snakes.
We want to emulate that, too! 

Using a recursive function, make it so that we print the number we are currently in on a new line. 
When we encounter a number n divisible by 5, we print "YEHEY" and jump 7 steps forward. 
However when we encounter a number divisible by 8, we print "OHNO" and go back 6 steps. 
If it is divisible by both, we print "LUCKY" and jump 11 steps. Otherwise just move 1 step. 
Start at n=1 and continue doing this until you reach a number greater than or equal to the number entered by the user.*/

#include<stdio.h>
void snake_ladder(int n, int stop);
int main(){
	int stop;
	printf("Enter stopping number: ");
	scanf("%d", &stop);
    
	snake_ladder(1, stop);
    
	return 0;
}

void snake_ladder(int n, int stop){
	if(n <= stop){
		if((n%5==0 && n%8==0) && n<=stop-1){
			printf("%d LUCKY\n", n);
			n+=11;
		}
		else if(n%5==0 && n<=stop-1){
			printf("%d YEHEY\n", n);
			n+=7;
		}
		else if(n%8==0 && n<=stop-1){
			printf("%d OHNO\n", n);
			n-=6;
		}
		printf("%d\n",n);
	}
  
	snake_ladder(n, stop);
}