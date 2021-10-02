#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int chatranh=20, huongduong=14, caffe=10;
	int sl1,sl2,sl3,tt;
	int sd=1000;
	printf("xin chao quy khach\n");
	printf("moi quy khach chon do uong\n");
	printf("1.chatranh\n",chatranh);
	scanf("%d", &sl1);
	printf("2.huongduong\n",huongduong);
	scanf("%d", &sl2);
	printf("3.caffe\n", caffe);
	scanf("%d", &sl3);
	tt=sl1*chatranh+sl2*huongduong+sl3*caffe;
	printf("so tien can thanh toan la : %d\n",tt);
	if(tt<=sd)
	printf("sd con lai cua quy khach la : %d\n ", sd-tt);
	else
	printf("quy khach ko du diem de thuc hien giao dich nay");
	return 0;
}
