#include<stdio.h>
#include<string.h>
int main (){
	char first[30];
	char last[30];
	char full[100];
	int i, length1, length2, lengthfull;
	
	printf("enter yout first name : ");
	gets(first);
	printf("enter your last name : ");
	gets(last);
	
	length1 = strlen(first);
	length2 = strlen(last);
	
	for(i=0;i<length1;i++){
	full[i]=first[i];}
	
	for (int j =0; j<length2; j++){
		full[length1+j]=last[j];
	}
	full[length1+length2]='\0';
	lengthfull=strlen(full);
	printf("reversed is : ");
	for(i=lengthfull-1; i>=0; i--){
		printf("%c", full[i]);
	}
	return 0;
}