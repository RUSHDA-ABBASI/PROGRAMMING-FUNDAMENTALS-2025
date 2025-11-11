#include<stdio.h>
//Write a program that calculates the sum of all the elements in array using pointers.
int sum(int *arr, int size){
	int sum = 0;
	for(int i=0;i<size;i++){
	sum +=arr[i];
}
return sum;
}
int main(){
	int array[3]={10,20,30};
	int result = sum(array,3);
	printf("sum is %d\n", result);
return 0;
}