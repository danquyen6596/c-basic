#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int a, b,c, d, min;
	printf("Nhap vao 4 chu so a, b, c, d: \n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	min = a;
	
	if(min > b)
		min =b;
	if(min > c)
		min = c;
	if (min > d)
		min = d; 
		
	printf("GTNN la: %d", min);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");					
	getch();
	return 0;	
}

