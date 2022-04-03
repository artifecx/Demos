/*Problem Description:
There's a challenge going on in the arena. 
The champion of all digits versus the champion of all letters. 
Fans, digits and letters alike, all over the land come and watch the battle of the legends!

I want you to count the letters and the digits of the string inputted. 
Note that the string may also contain onlookers like spaces and other special characters. 
Then output first the ones who have more in number than the other. 
Example when the number of digits is 25 where the number of letters is 36, 
I want you to print it as such: Letters 36 - Digits 25. 
Similarly when it turns out that the digits lead in number, print them first. 
If they are equal, just print the digits first.*/

#include<stdio.h>
int main(){
	char arr[100];
	printf("Enter string: ");
	fgets(arr,100,stdin);
  
	int l=0, d=0;
	for(int i=0;arr[i]!='\0';i++){
		if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z'))
			l++;
		else if(arr[i]>='0' && arr[i]<='9')
			d++;
		else 
			continue;
	}

	if(l>d)
		printf("\nLetters %d - Digits %d", l,d);
	else
		printf("\nDigits %d - Letters %d", d,l);

	return 0;
}