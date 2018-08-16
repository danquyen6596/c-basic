#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()
{
	float T, l, X, g = 9.18, Pi = 3.14;
	printf("Nhap vao chieu dai l=? (m)\n");
	scanf("%f",&l);
	X = l/g;
	T = 2*Pi*sqrt(X);
	system("cls");
	printf("Chieu dai l= %10.2f",l);
	printf("\nChu ki dao dong T= %10.2f",T);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getchar();
	return 0;
}
