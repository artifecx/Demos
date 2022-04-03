/*Problem Description:
Tomorrow is the closing ceremony for the 2022 World Cup, and as part of the Awarding Team, 
we have to determine who scored the most goals in the whole tournament and award them the Top Scorer Award. 
Ah, well, I’ve been too busy watching the games this past week so the top scorer ranking of the tournament is super jumbled now. 
You can find a way to rank them in the order of highest goals to lowest goals, right? Great! Gotta go watch the next game, bye!*/

#include<stdio.h>
int main(){
	int s;
	printf("Enter the number of goal-scorers: ");
	scanf("%d", &s);
  
	int arr[s];
	for(int i=0;i<s;i++){
		printf("Score of player #%d: ", i+1);
		scanf("%d", &arr[i]);
	}
  
	int a;
	for(int i=0; i<s; i++){
		for(int j = i+1; j<s; j++){
			if(arr[i]<arr[j]){
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
  
	printf("\nHighest to lowest: \n");
	for(int i=0;i<s;i++){
		printf("Player #%d: ", i+1);
		printf("%d\n", arr[i]);
	}

	return 0;
}