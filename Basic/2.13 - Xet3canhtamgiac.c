#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	float a, b, c, x, y ,z ;
	printf(" Nhap vao 3 chu so bat ki a, b, c: \n");
	scanf(" %f%f%f", &a, &b, &c);
	x = a + b;
	y = b + c;
	z = a + c;
	if((x > c) && (y > a) && (z > b))
		printf(" Ba so vua nhap la ba canh cua tam giac \n");
	else 
		printf(" Ba so vua nhap khong phai la ba canh cua tam giac");
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


