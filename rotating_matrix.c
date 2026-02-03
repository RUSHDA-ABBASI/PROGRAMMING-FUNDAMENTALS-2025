#include<stdio.h>
int main(){
	int n;
	printf("enter the number of rows/columns of matrix: \n");
	scanf("%d", &n);
	
	int arr[n][n];
	// taking array input
	printf("enter the elements of array: \n");
	for(int i = 0; i<n ; i++){
		for (int j = 0; j<n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	//transpose
	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			//swapping arr[i][j] and arr[j][i]
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i]= temp;	
		}
	}
	
	//printing transpose
	printf("transpose is: \n");
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	//rotating transpose
	for(int i = 0;i<n; i++){
		int j = 0;
		int k = n-1;
		while(j<k){
			//swap arr[i][j] and arr[i][k]
			int temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
			j++;
			k--;
		}
	}
	
	//printing output
	printf("rotated matrix is: \n");
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;}
