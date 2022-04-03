/*Problem Description:
For centuries, only the most gifted magicians were able to tell whether a square is magic or not.
But today, we are going to share this knowledge with the entire world!

I need you to create a device capable of determining whether a square is magic or not.
The thing is, a magic square is just a square matrix, 
whose size is odd and where the sum of the elements for each row and each column and each diagonal is same.

Now go forth and unleash the truth!*/

#include<stdio.h>
int main(){
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size][size];
	int rowcol[size];
	for(int i=0; i<size; i++){
		rowcol[i]=0;
	}
	
	printf("Enter values:\n");
	for(int row=0; row<size; row++){
		for(int col=0; col<size; col++){
			scanf("%d", &arr[row][col]);
			rowcol[row]+=arr[row][col];
		}
	}
  
	int rowrow[size];
	for(int i=0; i<size; i++){
		rowrow[i]=0;
	}
	for(int col=0; col<size; col++){
		for(int row=0; row<size; row++){
			rowrow[row]+=arr[row][col];
		}
	}
  
	int flag=0;
	for(int i=0; i<size; i++){
		if(rowcol[i]==rowrow[i] && rowcol[i]==rowcol[0])
			continue;
		else
			flag++;
	}
  
	if(flag!=0)
		printf("Just a square");
	else
		printf("MAGIC!");
    
	return 0;
}