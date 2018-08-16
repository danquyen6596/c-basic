#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	float TBC ;
	printf(" Nhap vao diem TBCTL: \n");
	scanf(" %f", &TBC);
	
	if(TBC >= 3.60)
		printf(" Xep loai Xuat sac \n");
	else 
		
			if(TBC >= 3.20 && TBC <3.6)	
				printf(" Xep loai Gioi");
			else
				
				if(TBC >= 2.50 && TBC <3.2)
					printf("Xep loai Kha");
				else 
						
					if(TBC >= 2.0 && TBC < 2.5)
						printf("Xep loai Trung binh");
					else
						printf("Xep loai Yeu");		
						
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");					
	getch();
	return 0;	
}


