/*Problem Description:
Knight is having a hard time in memorizing the Multiplication Table. 
However, this would be easier if he will program the table itself.
As a programmer, can you help Knight in creating a Multiplication Table?!*/

#include<stdio.h>
int main() {
	int s;
	printf("Enter size: ");
	scanf("%d", &s);
  
	for(int r=1;r<=s;r++){
		for(int c=1;c<=s;c++){
			printf("%d\t", c*r);
		}
		printf("\n\n");
	}
  
	return 0;
}