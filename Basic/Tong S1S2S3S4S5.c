#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()

{
	int S1, S2, S4, S5, n, i=1;
	float  S3;
	
	printf("Nhap vao so nguyen duong n: \n");
	scanf("%d",&n);
	S1=S2=S3=0;
	S4=S5=1;
	
	for(i;i <= n;i++)
		S1 += i;
	printf("Tong S1 = %d", S1);
	
	for(i;i <= n;i++)
		S2 += pow(i,2);
	printf("\nTong S2 = %d", S2);
	
	for(i;i <= n;i++)
		S1 += 1/i;
	printf("\nTong S3 = %d", S3);
	
	for(i;i <= n;i++)
		S4 = S4*i;
	printf("\nTong S4 = %d", S4);
	
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;	
}
