#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	float x, TT1, TT2, TT3, TT4;
	printf("Nhap vao so km da di:\n");
	scanf("%f", &x);
	TT1 = 15000;
	TT2 = TT1 + (x - 1) * 13500;
	TT3 = TT1 + (4 * 13500) + (x - 5) * 11000;
	TT4 = TT3 - (0.1 * TT3);
	if (x <= 1)
		{
			system("cls");
			printf("So km da di la: %10.2f ", x);
			printf("\nSo tien thanh toan la: %10.0f", TT1);
		}
	else
		{	if (x > 1 && x <= 5)
				{
					system("cls");
					printf("So km da di la: %10.2f", x);
					printf("\nSo tien thanh toan la: %10.0f", TT2);
				}
			else 
				{
					if (x > 5 && x <= 120)	
						{	
							system("cls");
							printf("So km da di la: %10.2f", x);
							printf("\nSo tien thanh toan la: %10.0f", TT3);
						}
					else
						if (x > 120)
								{
									system("cls");
									printf("So km da di la: %10.2f", x);
									printf("\nSo tien thanh toan la: %10.0f", TT4);
								}
				}			
		}	
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


