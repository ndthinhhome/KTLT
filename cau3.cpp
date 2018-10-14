#include<stdio.h>
#include <conio.h>
int main()
{
	//cau a
	int a;
	printf("Moi nhap 1 so nguyen: ");
	scanf("%d", &a);
	printf("So nguyen da nhap la: %d",a);
	
	//cau b
	float b;
	printf("\nMoi nhap 1 so thuc: ");
	scanf("%f", &b);
	printf("So thuc da nhap la: %f",b);
	
	//cau c
	char z;
	printf("\nMoi nhap 1 ki tu: ");
	fflush(stdin);//xoa bo nho
	scanf("%c", &z);
	printf("Ki tu da nhap la: %c",z);
	
	//cau d
	int x,y;
	float tong,hieu,tich,thuong;
	printf("\nNhap so nguyen 1: ");
	scanf("%d",&x);
	printf("Nhap so nguyen 2: ");
	scanf("%d",&y);
	printf("Tong hai so nguyen la: %d+%d=%d",x,y,x+y);
	printf("\nHieu hai so nguyen la: %d-%d=%d",x,y,x-y);
	printf("\nTich hai so nguyen la: %d*%d=%d",x,y,x*y);
	printf("\nThuong hai so nguyen la: %d/%d=%d",x,y,x/y);
	getch();
	return 0;
}
