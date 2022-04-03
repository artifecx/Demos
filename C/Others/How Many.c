/*Problem Description:
We’ve been conducting a survey for our investigatory project to ask how satisfied the students are with the current state of our school. 
We used a rating system that allowed the students to rate from 1 to 10. 
There were so many people who answered our survey that we couldn’t accurately tally the number of people who answered 
1, or 10, or any other number in between! Can you help us?*/

#include<stdio.h>
int main(){
	int n;

	printf("Enter n: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter elements:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
  
	int y;
	printf("Enter y: ");
	scanf("%d",&y);
  
	int f=0;
	for(int i=0; i<n; i++) {
		if(y==arr[i]) 
		f++;
	}
  
	printf("FREQUENCY: %d",f);

	return 0;
}