#include <stdio.h>

int main() {
  //khai bao bien n
  int n ;
  // gan gia tri n
  printf (" nhap n = ");
  scanf("%d", &n);
  // kiem tra n la chan hay le
  if (n%2 ==0){
    printf ("n la so chan");
  }else{
    printf (" n la so le");
  }

  getchar ();
  return 1;
}
