#include <stdio.h>

int main(void) {
  int i,n,a;
  printf("Nhap vao gia tri n= ",n);
  scanf("%d",&n);
  printf("Day so le tu 1 den 20 la: ",n);
  printf (" tru cac so 5 ,7 , 11 : ",n);
  for(i=1;
  i<=n;i++){a=i%2;
  if (a!=0)printf("%d ",i);
  }
  
  return 0;
  }
