#include<stdio.h>
int main(){
	int n,m;
	printf("enter number of rows: \n");
	scanf("%d", &n);
	printf("enter number of columns: \n");
	scanf("%d", &m);
	
	int arr[n][m];
	printf("enter elements of 1st matrix: \n");
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m ; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int p,q;
	printf("enter number of rows: \n");
	scanf("%d", &p);
	printf("enter number of columns: \n");
	scanf("%d", &q);
		if(m!=p){
			printf("multiplication not possible\n");
			return 0;
		}
	int brr[p][q];
	printf("enter elements of 2nd matrix: \n");
	for(int i = 0; i<p; i++){
		for(int j = 0; j<q ; j++){
			scanf("%d", &brr[i][j]);
		}
	}
	
	
	int res[n][q];
	// multiplying
	int rc = m;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<q; j++){
			res[i][j] = 0;
			for(int k = 0; k <rc; k++){
		  res[i][j] += arr[i][k] * brr[k][j];	
		}
	}
		printf("\n");
}

//printing
for(int i = 0; i<n; i++){
	for(int j = 0; j<q; j++){
		printf("%d ", res[i][j]);
	}
	printf("\n");
}	
	
	
	return 0;
}