#include<stdio.h>
int main (){
	int i,j,n=4;
	char ch='P';
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			printf(" ");
		}
		for (j=i;j<=n;j++){
			if(ch > 'Y')
				break;	
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
	int m=5;
	char ph='O';
	for(i=m;i>=1;i--){
		for(j=3;j>=m-i;j--){
			printf(" ");
		}
		for(j=m;j>=i;j--){
		printf("%c ", ph);
		ph--;
		}
		printf("\n");
	} 
	return 0;
}