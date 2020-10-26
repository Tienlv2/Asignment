
//  Bai04:Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
// <Ví dụ: 1 2 3 4 -1 -2 33 22 thì tổng cần in ra là 55>


#include <stdio.h>
int main(){
    int n;
    printf("Nhap n=");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("nhap arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int max=0,dem =0;
    for(int i=0;i<n;i++){
        if(arr[i] >0){
            dem+=arr[i];
            if(dem > max){
                max = dem;
            }
        }else{
            dem=0;
        }
    }
    printf("So luong so duong lien tiep nhieu nhat: %d",max);
}

