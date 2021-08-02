#include <stdio.h>
int main (){
	float sodien, tiendien;
    int bac1=1000 ,bac2= 1300, bac3= 1500, bac4= 1800, bac5= 2000, bac6= 2500;
    printf ("Nhap so dien:  ");
    scanf ("%f", &sodien);
    if (sodien < 0) {
    	printf ("Khong hop le");
    }else if (sodien <= 50) {
    	tiendien = sodien * bac1;
    	printf("So tien phai tra la %f",tiendien);
    }else if (sodien <= 100) {
    	tiendien = 50* bac1 + (sodien - 50)*bac2;
    	printf("So tien phai tra la %f",tiendien);
    }else if (sodien <= 200) {
    	tiendien = 50* bac1 + 50*bac2 + (sodien - 100)*bac3;
    	printf("So tien phai tra la %f",tiendien);
    }else if (sodien <= 300) {
    	tiendien = 50* bac1 + 50*bac2 + 100*bac3 + (sodien -200)*bac4;
    	printf("So tien phai tra la %f",tiendien);
    }else if (sodien <= 400) {
    	tiendien = 50* bac1 + 50*bac2 + 100*bac3 + 100*bac4 + (sodien -300)*bac5;
    	printf("So tien phai tra la %f",tiendien);
    }else if (sodien> 400) {
    	tiendien = 50* bac1 + 50*bac2 + 100*bac3 + 100*bac4 + 100*bac5 + (sodien-400)*bac6;
    	printf("So tien phai tra la %f",tiendien);
    }
    return 0;
    }
    
   
