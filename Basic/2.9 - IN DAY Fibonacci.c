#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int n, a0 =1 , a1 = 1, a2;
	printf("\nNhap vao so bat ki: "); 
	scanf("%d", &n);
	printf("\nDay cac so Fibonacci la: %d %d", a0, a1);
	
	do
		{ 
			a2 = a0 + a1;
			if(a2 <= n)
				{
					printf(" %d", a2);
					a0 = a1;
					a1 = a2;
				}
		}
	while(a2 <= n);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");		
	getch();
	return 0;	
}

