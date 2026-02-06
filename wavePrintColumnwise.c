#include <stdio.h>
int main(){
//this code prints a matrix in a zigzag (snake-like) pattern column-wise, alternating direction for each column.
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int j = 0; j<3; j++){
    	if(j%2 == 0){
    		for(int i = 3-1; i>=0; i--){
    		printf("%d ", arr[i][j]);
    	    }
		}
		else{
			for(int i = 0; i<3; i++){
    		printf("%d ", arr[i][j]);
    	    }
		}
		printf("\n");
	}
    return 0;
}
