/*Problem Description:
Detective! You're finally here.
We've been trying to triangulate a bunch of crimes around the city but we need your expertise. 
What we have here are clusters of numbers, each number representing the severity of a crime. 
You're going to have to find the crime that occurs the most in the cluster, 
and if multiple crimes have the same number of occurrences, then you're going to have to pick the most severe among them.

Here. Take the matrix that contains the data.
Note: The most "severe" is the one that occurred the most and has a larger value.*/

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d", &rows, &cols);

	int matrix[rows][cols];
	int freq[200] = { 0 };

	printf("Enter the values of the matrix:\n");
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			int input;
			scanf("%d", &matrix[row][col]);
			input=matrix[row][col];
			freq[input]++;
		}
	}
	
	int max=0, max_i=0;
	for(int i=0; i<200; i++){
		if(max<=freq[i]){
			max=freq[i];
			max_i=i;
		}
	}

	printf("Most severe crime = %d", max_i);

	return 0;
}