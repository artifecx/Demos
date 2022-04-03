/*Problem Description:
My students are all big fans of this boy band called BTS so to motivate them, 
I put them in groups and promised to buy concert tickets for the group with the highest combined score in the final exams. 
Each group is seated in rows so I’ll be counting the combined scores of each row. 
If different rows have the same score then I got no choice but to buy tickets for those groups.

BTS tickets are expensive so I don’t wanna make mistakes by manually counting the scores 
which is why I need your help to make me a program that counts the scores and determines which row scored the highest. 
If there is more than one row number, print them in only one line, separated by spaces.*/

#include<stdio.h>
int main(){
	int rows,cols;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d", &rows,&cols);
  
	int arr[rows][cols];
	int sum[rows];
  
	for(int i=0; i<rows; i++){
		sum[i]=0;
	}

	int a=0;
	printf("Enter scores:\n");
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			scanf("%d", &arr[row][col]);
			sum[row]+=arr[row][col];
			if(a<=sum[row]) 
				a=sum[row];
		}
	}
	
	printf("Highest scoring row/s: ");
	for(int i=0; i<rows; i++){
		if(a==sum[i])
			printf("%d ", i);
	}
  
	return 0;
}