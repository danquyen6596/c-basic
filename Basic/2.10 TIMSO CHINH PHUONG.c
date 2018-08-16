#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int n, m;
	
	printf("Nhap vao mot so bat ki: ");
	scanf("%d", &n);
	m = sqrt(n);
	if(m*m == n)
		printf("So vua nhap la so chinh phuong");
	else
		printf("So vua nhap khong phai la so phinh phuong");
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");	
	getch();
	return 0;	
}


