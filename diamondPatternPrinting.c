#include<stdio.h>
int main(){
	int i=1, j;
	while(i<=5){
		j=1;
		while(j<=5-i){
			printf(" ");
			j++;
		}
		j=1;
		while(j<=2*i-1){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
i=4;
	while (i>=1){
		j=1;
		while (j<=5-i){
			printf(" ");
			j++;
		}
		j=1;
		while(j<=2*i-1){
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
}
