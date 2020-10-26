//  Bai02: Nhập 1 số nguyên dương n, tìm số thuộc dãy fibonaci nhỏ hơn và gần n nhất ( ví du n=20 thì tìm ra số 13)

#include <stdio.h>
int main(){
    int n;
    do{
        printf("Nhap vao 1 so nguyen duong: ");
        scanf("%d",&n);
    }while(n <=2);
    int a=0,b=1,c=1;
    for(int i=3;i<=n;i++){
        a = b;
        b = c;
        c = a+b;
    }
    printf("So thu %d trong day Fibo: %d",n,c);
}
