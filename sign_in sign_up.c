#include<stdio.h>
#include<string.h>
int main (){
	int choice;
	char emails[5][50]={"ghufran@gmail.com", "aina@gmail.com", "saif@gmail.com"};
	char passwords[5][50]={"Hello12345", "Onepieceisreal", "xyz987654321"};
	int count=3;
	char email[50], password[50];
	while(1){
	
	printf("==== WELCOME TO THE LOGIN SYSTEM ====\n");
	printf("1. sign in\n");
	printf("2. sign up\n");
	printf("3. exit\n");
	printf("enter your choice : \n");
	scanf("%d",&choice);
	getchar();
	
	if(choice==1){
		printf("\n enter new email: ");
		fgets(email, sizeof(email),stdin);
		email[strcspn(email,"\n")]='\0';
		
		printf("enter password : ");
		fgets(password, sizeof(password), stdin);
		password[strcspn(password, "\n")]='\0';
		
		int found =0;
		for(int i=0; i<count;i++){
			if(strcmp(email, emails[i])==0 && strcmp(password, passwords[i])==0){
				found =1;
				break;
			}
		}
		if(found){
			printf("\n sign in successfull\n");
		}
		else{
			printf("\n invalid email or password \n");
		}	
	}
else if (choice==2){
	if(count>=5){
		printf("\n user limit reached. cannot register more users\n");
		continue;
	}
	printf("\nenter new email: ");
	fgets(email, sizeof(email),stdin);
	email[strcspn(email,"\n")]='\0';
	int exist=0;
	for(int i=0;i<count;i++){
		if(strcmp(email, emails[i])==0){
			exist=1;
			break;
		}
	}
	if(exist){
		printf("\n email already exists\n");
		continue;
	}
	printf("enter new password: ");
	fgets(password, sizeof(password), stdin);
	password[strcspn(password, "\n")]='\0';
	
	int length = strlen(password);
	int letter=0, digit=0;
	for (int i=0;i<length;i++){
		if((password[i] >= 'A' && password[i]<='Z') || (password[i] >= 'a' && password[i]<='z'))
		letter =1;
		if (password[i] >= '0' && password[i] <= '9')
		digit =1;
	}
	if (length < 8 || !letter || !digit) {
                printf("\n? Password must be at least 8 characters long and alphanumeric!\n");
                continue;
            }
             strcpy(emails[count], email);
            strcpy(passwords[count], password);
           count++;

            printf("\n? Account created successfully! Please sign in now.\n");
}
else if (choice == 3) {
            printf("\n exiting program \n");
            break;
}
else {
            printf("\nInvalid choice. Try again.\n");
        }
}
	return 0;
}