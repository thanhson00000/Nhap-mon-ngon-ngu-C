#include <stdio.h>

int main(void) {
			// khai bao bien dongia, so luong va thanh tien
int dongia, soluong, thanhtien;
			// nhap so tu ban phim
  		printf("nhap don gia :"); 
	scanf("%d", &dongia);

		printf("nhap so luong : ");
	scanf("%d", &soluong);

			// cong thuc tinh thanh tien
thanhtien = dongia * soluong;

			// so luong neu mua >=5 va dongia>= 500 se giam 50%
	if (soluong >= 5 , dongia >= 500){
  		printf("so tien can phai thanh toan la %d=/2", thanhtien );

}else{

  		printf("so tien can phai thanh toan la %d", thanhtien);
			// phai thoa man 2 dieu kien thi moi giam
}
  return 0;
}
