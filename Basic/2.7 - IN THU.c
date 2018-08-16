#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int n;
	printf("Nhap vao chu so bat ki: \n");
	scanf("%d", &n);
	system("cls");
	switch(n)
	{
		case 2: printf("\nThu Hai");
				break;
		case 3: printf("\nThu Ba");
				break;
		case 4: printf("\nThu Tu");
				break;		
		case 5: printf("\nThu Nam");
				break;		
		case 6: printf("\nThu Sau");
				break;		
		case 7: printf("\nThu Bay");
				break;		
		case 8: printf("\nChu Nhat");
				break;
		default: printf("\n Khong phai la thu trong tuan");
	}	
	printf("\n");
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");					
	getch();
	return 0;	
}

