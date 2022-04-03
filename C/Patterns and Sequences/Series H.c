//1 2 3 (4 5 6 7) 8 9 10 (11 12 13 14) 15 16 17 (18 19 20 21) 22 23 24 29...

#include<stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
  
	int t=0,j=0,i=0;
	while(t<n){
		j++;
			if(j<=3){
				printf("%d ", i+1);
				t++;
			} 
			else{
				i+=3;
				j=0;
			}
		i++;
	}
  
	return 0;
}