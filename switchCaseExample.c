#include<stdio.h>
int main ()
{
	char yes_no;
	
	printf(" do you want to delete this?\n");
	printf(" press Y or y if yes\n");
	printf(" press N or n if no\n");
	printf(" enter your choice: ");
	scanf("%c", &yes_no);
	
	switch (yes_no){
	
	case 'Y' :
		printf("deleted successfully.");
		break;
	
	case 'y':
		printf("deleted successfully.");
		break;
	
		
	case 'N' :
		printf("delete cancelled .");
		break;
	
		case 'n' :
		printf("delete cancelled .");
		break;
	
	default :
		printf("choose the right option");
		break;
	
}
	return 0;
}