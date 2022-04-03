/*Problem Description:
Given a 2D array, determine if there is a row or a column that has the same numbers all throughout.*/

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter the size of rows and columns: ");
	scanf("%d %d", &rows, &cols);
  
	int arr[rows][cols];
	printf("Enter values:\n");
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			scanf("%d", &arr[row][col]);
		}
	}
	
	int flag=0, y=0;
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			if(arr[row][col]==arr[row][col+1])
				flag++;
			else if((col==cols-1 && arr[row][col]==arr[row][col-1]) && arr[row][0]==arr[row][1])
				flag++;
			else {
				flag=0;
				break;
			}
		}
		if(flag==cols){
			y=1;
			break;
		}
	}
	
	if(flag!=0)
		printf("yes");
	if(y==1)
		return 0;
    
	for(int col=0; col<cols; col++){
		for(int row=0; row<rows; row++){
			if(arr[row][col]==arr[row+1][col])
				flag++;
			else if((row==rows-1 && arr[row][col]==arr[row-1][col]) && arr[0][col]==arr[1][col])
				flag++;
			else {
				flag=0;
				break;
			}
		}
		if(flag==rows){
			break;
		}
	}
	
	if(flag!=0)
		printf("yes");
	else
		printf("no");
  
	return 0;
}