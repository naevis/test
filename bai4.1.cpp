#include <stdio.h>
int main (){
long a,b;
printf ("Nhap so tien luong:  ");
scanf ("%d", &a);
	
	if(a>1000000000) {b= a*0.1; }
	if(200000000< a <= 500000000) {b=a *0.05;}
	if (a<= 200000000) {b= a *0.03;}
	if (a<0) {b= a* 0;}
	printf ("Thue la: %ld", b);
	}
