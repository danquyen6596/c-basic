#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int i=2, j, count=0, sum=0;
	
	for(i;i < 50;i++)
		{
			for(j=1;j <= i;j++)
				if(i%j==0)
				count++;
			if(count == 2)
			sum += i;
			count = 0;
		}
	printf("Tong cac chu so nguyen to la: %d", sum);

	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}


