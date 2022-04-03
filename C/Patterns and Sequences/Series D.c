//2 3 5 8 12 17 23 30 38...

#include<stdio.h>
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
  
	for(int i=1; n>0; n--){
		int s=((i*i)-i+4)/2;
		printf("%d ",s);
		i++;
	}
  
	return 0;
}