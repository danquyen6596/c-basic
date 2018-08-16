#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int masp, soluong, dongia;
	float tongtien, thuegtgt;
	printf("Nhap vao masp, soluong, dongia \n");
	scanf("%d%d%d",&masp,&soluong,&dongia);
	tongtien = soluong * dongia;
	thuegtgt = tongtien * 0.1;
	system("cls");
	printf("\n Ma san pham la: %d", masp);
	printf("\n So luong la: %d", soluong);
	printf("\n Don gia la: %d", dongia);
	printf("\n Tong so tien la: %0.2f", tongtien);
	printf("\n Thue GTGT la: %0.2f", thuegtgt);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;
}
