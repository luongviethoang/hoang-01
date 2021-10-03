#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("nhap so");
	scanf("%d %d",&a,&b);
	if( a<2000 && a>3000)
	{
	if( b<500&&b>100)
		printf("y");
		else
		printf("no y here");}
	else
	printf("no x here");
	

    
	return 0;
}
