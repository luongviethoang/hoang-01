#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int C,F;
	printf("nhap vao do:\n");
	scanf("C=%d", &C);
    F = (C*9)/5 + 32;
    printf("do F la:%d", F);
	return 0;
}
