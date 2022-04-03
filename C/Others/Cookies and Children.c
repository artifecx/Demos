/*Problem Description:
You are baking cookies for your nieces and nephews, but you don’t know exactly how many they are. 
Once you finish baking cookies, you give them an equal number of cookies, 
but you are left with leftovers and you don’t want spare cookies 
so you cook a few more so that you can give each of the children one more.
Given (1) the number of cookies you have baked and (2) the number of children, 
calculate the number of cookies that you additionally need to bake to give each child one more. 
Note: Assume that you will always have a leftover.

Example 01:
Given:
·  number_of_cookies = 57
·  number_of_children = 7

Output:
“I need to bake 6 additional cookies to give each child 9 cookies.”*/

#include<stdio.h>
int main(){
	int cookies, children, additional, total, ck_ch, rem;
  
	printf("Enter number of cookies: ");
	scanf("%d", &cookies);
	printf("Enter number of children: ");
	scanf("%d", &children);

	ck_ch=cookies/children;
	rem=cookies%children;
	additional=children-rem;
	total=ck_ch+1;
    
	printf("I need to bake %d additional cookies to give each child %d cookies.", additional, total);

	return 0;
}