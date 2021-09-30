#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int R,S,CV;
	printf("nhap R:\n");
	scanf("%d",&R);
	S=R^2;
	printf("dien tich hinh tron la:%d\n", S);
	CV=(2*R)*3.14;
	printf(" CV hinh tron la:%d\n", CV);
}
