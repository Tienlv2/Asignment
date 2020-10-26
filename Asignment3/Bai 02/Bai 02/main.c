//
//  main.c
//  Bai 02: Bố mẹ cho 4000$ để nhập học Aptech mong con học thành tài. Tuy nhiên giả sử nếu với số tiền này mà đem gửi ngân hàng với lãi suất 8%/năm thì hỏi là sau 4 năm tổng tiền thu được là bao nhiêu với điều kiện là lãi kép ( lãi cộng dồn vào gốc theo hàng năm)

#include <stdio.h>
int main(){
    float tk=4000,ls=0.08;
    tk = tk + tk*ls;
    tk = tk + tk*ls;
    tk = tk + tk*ls;
    tk = tk + tk*ls;
    printf("So tien thu duoc: %f",tk);
}
