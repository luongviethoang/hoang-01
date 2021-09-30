#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int CD,Cr,S,CV;
	printf("nhap lan luot CD va cr:\n");
	scanf("%d %d", &CD,&Cr);
	S=Cr*CD;
	printf("S cua hcn la:%d\n", S);
	CV=(CD+Cr)*2;
	printf("CV cua hcn la:%d\n", CV);
	
	return 0;
}
