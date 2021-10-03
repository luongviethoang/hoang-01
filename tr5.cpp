#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int marks;
	printf("nhap diem\n");
	scanf("%d",&marks);
	if(marks>75)
	printf("grade A");
	else if(marks>60&&marks<75)
	printf("grade B");
	else if(marks>45&&marks<60)
	printf("grade C");
	else if(marks<35)
	printf("grade E");
	else
	printf("grade D");
}
	
	
	
	
	
	
	
	
	
	

	
