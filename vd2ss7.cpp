#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int years;
	printf("please enter a year:\n");
	scanf("%d",&years);
	if(years%4==0 && years%100 != 0 || years%400==0)
		printf("\n%d is a leap years", years);
	
}
	
	
	
	
	
	
	
	
	
	

	
