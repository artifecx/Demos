/*Problem Description:
Remember the game of FizzBuzz from the last time? 
Well, I thought of some changes in the game, and also with the help of loops as well. 
Firstly, you'll be asking for a random integer and then loop from 1 until that integer. 
Then, implement these conditions in the game:

print "Fizz" if the number is divisible by 3
print "Buzz" if the number is divisible by 5
print "FizzBuzz" if the number is divisible by both 3 and 5
print the number itself if none of the above conditions are met*/

#include<stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		if(i%3==0 && i%5==0) 
			printf("FizzBuzz\n");
		else if(i%3==0) 
			printf("Fizz\n");
		else if(i%5==0) 
			printf("Buzz\n");
		else 
			printf("%d\n",i);
	}
  
	return 0;
}