#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=300;
	int b=250;
	int others=100;
	int sl=10000;
	char hang;
	printf(" nhap vao hang%c\n",hang);
 	scanf("%c",&hang);
 	if(hang=a)
 	printf("luong thang cua ban la%d\n", sl+a);
 	else if (hang=b)
 	printf("luong thang cua ban la%d\n", sl+b);
 	else
 	printf("luong thang cua ban la%d", sl+others);
	
}
