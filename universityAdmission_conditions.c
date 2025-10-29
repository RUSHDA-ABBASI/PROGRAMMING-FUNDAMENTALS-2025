#include<stdio.h>
int main()
{
	int fsc, nts, category;
	printf("enter your fsc percentage: ");
	scanf("%d", &fsc);
	
	printf("enter your nts percentage: ");
	scanf("%d", &nts);
	
	if (fsc > 70){
	
	category = 1;
}
	else if (fsc >= 60 && fsc <= 70){
	
	category = 2;
}
	else if (fsc >= 50 && fsc <= 59){
	
	category = 3;
}
	else if (fsc >= 40 && fsc <= 49){
	
	category = 4;
}
	else{
	
	category = 0;
}
switch (category){

case 1:
	if (nts >= 70){
	
	printf("you got admission in oxford IT department\n");
}
	else if (nts >= 60){
	
    printf("you got admission in oxford electronic department\n");
}
    else if (nts >= 50){
	
    printf("you got admission in oxford telecommunication department\n");
}
    else{
    printf(" you are not eligible\n");}
    break;
    
    case 2:
    	if (nts >= 50)
    	printf(" you got into MIT IT department\n");
    	
    	else 
    	printf("you are not eligible\n");
    	break;
    	
    	case 3:
    		if (nts >= 50)
    		printf("you got into MIT chemical department\n");
    		
    		else 
    		printf("you are not eligible\n");
    		break;
    		
    	case 4:
    		if (nts >= 50)
    		printf("you got into MIT computer department\n");
    		
    		else 
    		printf("you are not eligible\n");
    		break;
    		
    		
    		case 0: 
    		printf("you are not eligible");
    		break;
    
    		default:
    			printf("you are not eligible for any of these dept in these universities\n");
    			break;
}
    			
	return 0;
}