#include<stdio.h>
int main(){
	int count = 0,num;
	printf("enter a number: ");
	scanf("%d", &num);
	
	if(num<=1){
		printf("non prime\n");
		return 0;
	}
	for(int i = 1; i<= num; i++){
		if(num%i == 0){
			count++ ;
		}
	}
	if(count == 2) printf("prime\n");
	else printf("non prime\n");
	
	return 0;
}