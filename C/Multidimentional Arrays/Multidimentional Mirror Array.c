/*Problem Description:
I'm stuck in a hall of mirrors! 
I was told that there was only one way for the exit to be revealed to me, 
and that is if I can determine whether the multidimensional array shown in the mirror 
looks the same as the one I'm currently holding! You need to help me get out, I'm begging you!*/

#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
  
	int arr[rows][cols];
	int mirror[rows][cols];
  
	printf("Enter values:\n");
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			scanf("%d", &arr[row][col]);
		}
	}
	
	int a, m;
	for(int row=0; row<rows; row++){
		m=-1;
		for(int col=0; col<cols; col++){
			a=arr[row][col];
			mirror[row][col]=arr[row][col+(cols+m)];
			mirror[row][col+(cols+m)]=a;
			m-=2;
		}
	}
	
	int flag=0;
	for(int row=0; row<rows; row++){
		for(int col=0; col<cols; col++){
			if(mirror[row][col]==arr[row][col])
				continue;
			else{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	
	if(flag!=1)
		printf("mirror");
	else
		printf("not");
  
	return 0;
}