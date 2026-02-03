#include<stdio.h>
int main(){
	int r,c;
	printf("enter the number of rows of matrix: ");
	scanf("%d", &r);
	printf("enter the number of columns of matrix: ");
	scanf("%d", &c);
	
	int arr[r][c];
	printf("enter the elements of matrix: \n");
	for(int i = 0; i<r; i++){
		for(int j = 0; j <c ; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("the matrix you entered is : \n");
	for(int i = 0; i< r; i++){
		for(int j = 0; j<c ; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("transpose of the matrix you entered is: \n");
	for(int j = 0; j<c; j++){
		for(int i = 0; i<r; i++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}