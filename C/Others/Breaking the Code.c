/*Problem Description:
ATTENTION SOLDIER!
This will be the hardest mission of your life. 
Our intelligence department has caught the enemy sending codes from one base to another. 
These enemy codes can either be a simple communication message or a mastermind plan.
Our intelligence department has determined that a mastermind plan is a code that has at least 1 consonant character.
Since you know programming, your task is to check a code if it is a mastermind plan or not.*/

#include<stdio.h>
int hasConsonant(char*);
int main(){
	char code[100];
	printf("Enter the code: ");
	scanf("%s", code);

	int result=hasConsonant(code);

	if(result==1){
		printf("ALERT! There is a consonant in the code!");
	} 
	else if(result==0){
		printf("There is no consonant in the code. Situation is under control!");
	}

	return 0;
}

int hasConsonant(char *code){
	int s=0, c=0;
  
	for(int i=0;i<100;i++){
		if((code[i]>=65 && code[i]<=90) 
		|| (code[i]>=97 && code[i]<=122))
			s++;
		else 
			break;
  }
  
	for(int i=0; i<s;i++){
		if(code[i]=='A' || code[i]=='a' || code[i]=='E' || code[i]=='e'
		|| code[i]=='I' || code[i]=='i' || code[i]=='O' || code[i]=='o' 
		|| code[i]=='U' || code[i]=='u')
			c=0;
		else{
			c++;
			break;
		}
	}
  
	if(c>0) 
		return 1;
	else 
		return 0;
}