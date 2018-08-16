#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int n = 101, amstrong, sum = 0, ams  ;
	printf("\n Day so Amstrong la: ");
	
	for(n; n < 1000; n++)
	amstrong = n;
		{
		while(n>0)	
			{
				ams = n%10;
				sum = sum + ams*ams*ams;
				n = n/10;
			}
		if(sum == amstrong)
			printf("%d",amstrong);
		}
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");		
	getch();
	return 0;	
}

