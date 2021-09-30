#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int canh,S,CV;
	printf("nhap canh:\n");
	scanf("%d", &canh);
	S=canh*canh;
	printf("S cua hv la:%d\n", S);
	CV=canh*4;
	printf("CV cua hv la:%d\n", CV);
	
	return 0;
}
