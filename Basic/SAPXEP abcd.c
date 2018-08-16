#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int a, b, c, d, temp; //temp bien trung gian
	printf("Nhap vao 4 chu so bat ki:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if (a > b)
		{
			temp = a;
			a = b;
			b = temp;
		}	
	if (a > c)
		{
			temp = a;
			a = c;
			c = temp;
		}
	if (a > d)
		{
			temp = a;
			a = d;
			d = temp;
		}
	if ( b > c)
		{
			temp = b;
			b = c;
			c = temp;
		}
	if ( b > d)
		{
			temp = b;
			b = d;
			d = temp;
		}
	if ( c > d)
		{
			temp = c;
			c = d;
			d = temp;
		}
	printf(" Day so sau khi sap xep la: %2d%2d%2d%2d", a, b, c, d);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


