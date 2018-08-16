#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int SSP, TIENCONG ;
	printf(" Nhap vao so luong san pham: \n");
	scanf(" %d", &SSP);
	
	if(SSP <= 200)
		{
			TIENCONG = SSP * 10000;
			printf(" Tien cong la: %d (VND)\n", TIENCONG);
		}	 
	 else
	 	{
		 	if(SSP > 200)
				{
					TIENCONG = (200 * 10000) + ((SSP - 200) * 15000);
					printf(" Tien cong la: %d (VND)\n", TIENCONG);
				}
		}	
		
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");				
	getch();
	return 0;	
}


