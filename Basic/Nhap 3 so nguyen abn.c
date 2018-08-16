#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int a, b, n, i=0, sum=0;
	printf("Nhap vao 3 so a, b, n (a, b < n)\n");
	scanf("%d%d%d", &a, &b, &n);
	for(i;i < n;i++)
		if(i%a ==0 && i%b!=0)
			sum += i;
	printf("Tong cac chu so thoa man la: %d", sum);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


