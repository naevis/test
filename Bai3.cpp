#include <stdio.h>
int main (){
   float dt, dv, dtb;
	printf("nhap diem toan:   ", dt);
	scanf ("%f", &dt);
	printf("nhap diem van:    ", dv);
	scanf ("%f",&dv);
    printf ("nhap diem trung binh: ", dtb);
    scanf ("%f", &dtb);
if ( dtb >=8 &&  dt>=8 |dv >= 8) {
	printf ("Hoc luc gioi");
}if (dtb >= 6.5 && dt >= 6.5 |dv >= 6.5) {
	printf ("Hoc luc kha");
} if (dtb>=5 && dt >=5 | dv >=5){
	printf ("Hoc luc trung binh");
} if (dtb<5) {
	printf ("Hoc luc yeu");	
	} if ( dtb>10 | dt > 10 | dv > 10 ) {
		printf ("Diem khong hop le");
		}
		
	
} 

