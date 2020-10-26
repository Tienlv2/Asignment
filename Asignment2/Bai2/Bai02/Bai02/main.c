//  Bai02: Nhập vào 2 số nguyên a,b. Nếu a >= b thì  in ra kết quả của a/b, ngược lại thì in ra kết quả của a*b

#include <stdio.h>
int main(){
  int a;
  printf("Nhap a=");
  scanf("%d",&a);
  int b;
  printf("Nhap b=");
  scanf("%d",&b);
  if(a>=b){
      if(b==0){
          printf("Khong the chia cho 0");
      }else{
          int c = a/b;
          printf("%d / %d = %d",a,b,c);
      }
  }else{
      int c = a*b;
      printf("%d x %d = %d",a,b,c);
  }
}
