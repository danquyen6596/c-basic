#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()

{
	float a, b, c, d, x1, x2, x;
	printf(" Nhap vao cac he so a ,b ,c \n");
	scanf("%f%f%f",&a,&b,&c);
	d = pow(b,2) - (4*a*c);
	printf("Delta = %0.2f",d);
	if (d==0) 
		{	x = (-b)/(2*a);
		 	printf("\nPhuong trinh co mot nghiem x= %0.2f",x);
		}
		else
			if (d < 0)
				printf("\nPhuong tinh vo nghiem @@");
			else 
				{	x1= (-b-sqrt(d))/(2*a);
					x2= (-b+sqrt(d))/(2*a);
					printf("\nPhuong trinh co hai nghiem x1=%0.2f va x2=%0.2f",x1,x2);
				}
				
	printf("\n=========================================\nCODE BY PROGAMMER: LE SY QUYEN \nMSV: 15D190042");
	getch();
	return 0;
}
