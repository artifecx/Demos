/*Problem Description:
We have a special promo here in our convenience store for our loyal customers!
If you have visited our store for a specified number of times, you get yourself a prize!

Given a set of numbers representing the customers visiting the store and a number n, print all the customer numbers that has visited the store n times. 
If there isn't any, print "No lucky customer" instead.*/

#include<stdio.h>
int main(){
	int size;
	printf("Enter Number of Customers: ");
	scanf("%d", &size);
  
	int array[100] = { 0 };
	int cust_id;
	printf("Enter Customer ID's:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &cust_id);
		array[cust_id]++;
	}
  
	int freq;
	printf("Enter Lucky Number: ");
	scanf("%d", &freq);
  
	int flag=0;
	printf("Result:");
	for(int i=0; i<100; i++){
		if(freq==array[i]){
			printf("\t#%d\n", i);
			flag=1;
		}
	}
  
	if(flag==0)
		printf("No lucky customer");
  
	return 0;
}