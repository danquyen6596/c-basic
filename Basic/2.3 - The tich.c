#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int main()

{
	float R, V, S, Pi = 3.14;
	printf("Nhap vao ban kinh R\n");
	scanf("%f",&R);
	V = 4*Pi*pow(R,3)/3;
	S = 4*Pi*pow(R,2);
	system("cls");
	printf("\nBan kinh R= %0.2f",R);
	printf("\nDien tich S= %0.2f",S);
	printf("\nThe tich V= %0.2f",V);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;
}

