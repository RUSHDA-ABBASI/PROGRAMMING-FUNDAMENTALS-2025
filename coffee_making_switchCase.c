#include<stdio.h>
int main ()
{
 char coffee, cup, m;
int total_time = 0;
	printf(" how do you want your coffee?\n");
	printf(" enter B if you want black coffee\n");
	printf("enter W if you want white\n");
	printf("enter your choice: \n");
	scanf(" %c", &coffee);
	
	switch(coffee){
		case 'W':
			printf("put water = 15 mins\n");
			total_time+=15;
			printf("add sugar = 15 mins\n");
			total_time+=15;
			printf("mix well = 20 mins\n");
			total_time+=20;
			printf("add coffee = 2 mins\n");
			total_time+=2;
			printf("add milk = 4 mins\n");
			total_time+=4;
			printf("mix well = 20 mins\n");
			total_time+=20;
			break;
			
			case 'B':
				printf("put water = 20 mins\n");
				total_time+=20;
				printf("add sugar = 20 mins\n");
				total_time+=20;
				printf("mix well = 25 mins\n");
				total_time+=25;
				printf("add coffee = 15 mins\n");
				total_time+=15;
				printf("mix well = 25 mins\n");
				total_time+=25;
	      	break;
				
				default : 
				printf("invalid coffee type");
				return 0;		
	}
		printf("is your cup double or single?\n");
	printf("enter s if single\n");
	printf("enter d for double\n");
	printf("enter your choice: \n");
	scanf(" %c", &cup);
	

	if (cup == 'd'){
		printf("you selected double cup\n");
	 total_time = total_time + (total_time * 0.5); 
	} 
	else {
		printf("you selected single cup\n");
	}
		printf("do you want your coffee to be made manually or by machine?\n");
	printf("enter o for manual\n");
	printf("enter n for machine\n");
	printf("enter your choice: \n");
	scanf(" %c", &m);
	
	if (m == 'o'){
		printf("prepare your coffee manually\n");
	}
	
	else {
		printf("your coffee will be prepared by machine\n");
	}
	printf("total_time = %d minutes\n", total_time);
	
	return 0;
}