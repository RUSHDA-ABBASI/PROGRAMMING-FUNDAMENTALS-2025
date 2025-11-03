#include<stdio.h>
/*
Write a program that reads the numbers from user and store these numbers into an array of
same size. Find and display the sum of all positive numbers and calculate the average.
*/
int main (){
	int i,n;
	float sum = 0,count=0;
	float avg;
	
	printf("how many numbers you want to enter?: ");
	scanf("%d", &n);
	
	int numbers[n];
	 	printf("enter %d numbers : \n");
	 	for(i=0;i<n;i++){
	 		scanf("%d", &numbers[i]);
		 }
		 
		 printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    for(i=0;i<n;i++){
    	if(numbers[i]<0){continue;}
		sum = sum + numbers[i];
		count = count + 1;
	}
    avg = sum/count;
    printf("\nsum is : %f", sum);
    printf("\n average is : %f", avg);
    printf("\n count is : %f", count);
	
	return 0;
}