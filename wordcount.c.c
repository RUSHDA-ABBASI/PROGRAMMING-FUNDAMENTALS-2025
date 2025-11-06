#include<stdio.h>
#include<string.h>
/*
Write a program using functions that performs text
analysis on an input sentence.
Functions:
int countVowels(string text)
int countWords(string text)
int countUppercase(string text)
*/
int countvowels(char text[]){
	int count =0;
	for(int i=0;text[i]!='\0';i++){
		char ch = text[i];
		if(ch == 'A'|| ch == 'E'|| ch == 'I' || ch == 'O' || ch=='U'|| ch == 'a' || ch == 'i'|| ch =='e'|| ch == 'o' || ch == 'u'){
			count++;
		}
	}
return count;	
}
int countwords(char text[]){
	  int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if ((text[i] != ' ' && text[i] != '\t' && text[i] != '\n') &&
            (i == 0 || text[i - 1] == ' ' || text[i - 1] == '\t' || text[i - 1] == '\n')) {
            count++;
        }
    }
    return count;
}
int countUppercase(char text[]) {
    int count = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            count++;
        }
    }
    return count;
}
	
int main(){
char sen[200];
	printf("enter a sentence: ");
    fgets(sen, sizeof(sen),stdin);
    
    printf("Number of vowels: %d\n", countvowels(sen));
    printf("Number of words: %d\n", countwords(sen));
    printf("Number of uppercase letters: %d\n", countUppercase(sen));

	return 0;
}