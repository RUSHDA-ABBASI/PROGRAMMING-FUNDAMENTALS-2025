#include<stdio.h>
int main(){
	int a = 0, b = 1;
	int next;
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	while(1){
		next = a+b;
		
		if (next > 300)
		break;
		
		if (next % 5==0){
			a=b;
			b=next;
			continue;
		}
printf("%d\n", next);
a = b;
b=next;
	}
	return 0;
}