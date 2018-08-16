#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int i=10,TICH, TONG, num1,num2;
	printf("\n Cac so thoa man bai toan la:");
	
	for(i;i < 99;i++)
		{	
			num1=i%10;
			num2=i/10;
			TICH=num1*num2;
			TONG=2*(num1+num2);
			if(TICH==TONG)
			printf(" %d", i);
		}
	
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");	
	getch();
	return 0;	
}


