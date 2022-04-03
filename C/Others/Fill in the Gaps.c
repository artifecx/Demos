/*Problem Description:
The foundation for our building is slowly collapsing. 
We need to reinforce it by filling in the gaps! 
Our foundation is made up of a bunch of different integers, with values that could still be filled in between. 
Your job is to figure out which values can be filled in between the existing ones.  */

#include<stdio.h>
int main(){
	int s;
	printf("Enter the size: ");
	scanf("%d", &s);
  
	int arr[s];
	printf("Enter the elements: ");
	for(int i=0; i<s; i++){
		scanf("%d", &arr[i]);
	}

	int a=arr[0];
	printf("Gaps = ");
	for(int i=0; i<s; i++){
		if(arr[i]-i!=a){
			while(a<arr[i]-i){
				printf("%d ",i+a);
				a++;
			}
		}
	}
	
	return 0;
}