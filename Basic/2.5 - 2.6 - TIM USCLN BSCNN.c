#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int a, b, x, y, USCLN, BSCNN ;
	printf("Nhap vao 2 a, b chu so bat ki: \n");
	scanf("%d%d", &a,&b);
	system("cls");
	x = a;
	y = b;
	while (a != b)
		{
			if(a > b)
			a -= b;
			else 
			b -= a;
		}
	
	USCLN = a;	
	printf("USCLN cua %d va %d la: %d", x, y, USCLN);
	
	BSCNN = (x * y)/USCLN;
	printf("\nBSCNN cua %d va %d la: %d", x, y, BSCNN);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");					
	getch();
	return 0;	
}

