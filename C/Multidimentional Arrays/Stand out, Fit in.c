/*A good spy can always recognize another spy. 
No matter how good the disguise or how well they blend in, something about spies will always stand out and make them unique.

For your final exam in Spy school you have to distinguish spies that are hiding in plain sight and among the public. 
You're given a multidimensional array that shows the people in a certain area. 
A spy is found if there is at least one of the people that is unique from all the others.*/

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
  
	int arr[rows][cols];
	int freq[9] = { 0 };
  
	int input;
	printf("Enter values:\n");
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			scanf("%d", &arr[row][col]);
			input=arr[row][col];
			freq[input]++;
		}
	}
	
	int flag=0;
	for(int i=0; i<10; i++){
		if(freq[i]!=1)
			continue;
		else
			flag=1;
	}
  
	if(flag!=0)
		printf("SPY");
	else
		printf("NONE");
  
	return 0;
}