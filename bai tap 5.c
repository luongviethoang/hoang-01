#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan,ly,hoa,sum,avg;
	printf("nhap lan luot diem ba mon:\n");
	scanf("%f %f %f", &toan,&ly,&hoa);
	sum=toan+ly+hoa;
	printf("tong diem 3 mon la:%f\n",sum);
	printf("trung binh 3 mon la:%f\n", avg=sum/3);
}
