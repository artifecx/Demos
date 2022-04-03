#include<stdio.h>
void insertionSort(int*, int);
void perLoop(int*, int, int);
void changeLog(int, int, int*, int, int);
void red()  { printf("\033[1;31m"); }
void cyan() { printf("\033[1;36m"); }
void green(){ printf("\033[1;32m"); }
void reset(){ printf("\033[0m");    }

int main(){
  
	int array[] = { 46, 38, 25, 109, 127, 11, 53, 69};
	int len=sizeof(array)/sizeof(array[0]);
  
	printf("ORIGINAL ARRAY: ");
	cyan();
		for(int i=0; i<len; i++){
			printf("%d ", array[i]);
		}
		printf("\n");
	reset();
    
	printf("\n=====================VISUALIZED PROCESS START=====================\n");
	insertionSort(array, len);
	printf("\n=====================VISUALIZED PROCESS END=====================\n");
  
	printf("\nFINAL ARRAY: ");
	green();
		for(int i=0; i<len; i++){
			printf("%d ", array[i]);
		}
	reset();
  
	return 0;
}

void insertionSort(int* array, int len){
	for(int i = 1; i<len; i++){
		int key=array[i];
		int array_s[len];
		int j=i-1, pos=i;
		int counter=0;
    
	printf("\nLOOP %d: ", i);
	perLoop(array, len, key);

		for(int i=0; i<len; i++){
			array_s[i]=array[i];
		}
    
		while(j>=0 && array[j]>key){	//flip to < for descending
			array[j+1]=array[j];
      
			int change=array[j];
			counter++;
      
			changeLog(change,len,array_s,key,pos);
      
			if(j>=0 && array[j]>key)
				printf("\t\033[1;32m%d\033[0m is less than \033[1;31m%d\033[0m",array_s[pos], change);
			else
				printf("\t\033[1;32m%d\033[0m is greater than \033[1;31m%d\033[0m",array_s[pos], change);
      
			j=j-1;
		}
    
		if(counter==0)
			printf("\tNO CHANGE");
    
		array[j+1] = key;
		printf("\n");
	}
}

void perLoop(int* array, int len, int key){
	for(int i=0; i<len; i++){
		if(array[i]==key)
			green();
		else
			reset();

	printf("%d ", array[i]);
	}
  reset();
}

void changeLog(int change, int len, int* array_s, int key, int pos){
	printf("\n\t");
		for(int i=0; i<len; i++){
			if(array_s[i]==change)
				red();
			else if(array_s[i]==key)
				green();
			else if(i>pos)
				reset();
		printf("%d ", array_s[i]);
		}
	reset();
}