#include <stdio.h>
int main(){
//This program prints the matrix in a zigzag / snake pattern row-wise, alternating direction for each row.
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	for(int i = 0; i<3; i++){
		if(i%2==0){
			for(int j=0; j<3; j++){
				printf("%d", arr[i][j]);
			}
		}
		else{
			for(int j = 3-1; j>=0; j--){
				printf("%d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}