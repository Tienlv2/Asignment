//
//  main.c
//  bai 1: Nhập 1 số nguyên dương không quá 4 chữ số. Tìm số đảo ngược của số đó. Ví dụ nhập: 241 thì kết quả là 142

#include <stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    int x = 0;
    if(n!=0){
        x = x*10 + n%10;
        n /=10;
    }
    if(n!=0){
        x = x*10 + n%10;
        n /=10;
    }
    if(n!=0){
        x = x*10 + n%10;
        n /=10;
    }
    if(n!=0){
        x = x*10 + n%10;
        n /=10;
    }
    printf("Dao nguoc: %d",x);
}
