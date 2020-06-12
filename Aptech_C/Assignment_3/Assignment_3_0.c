#include <stdio.h>
// Nhap vao 1 so duong co toi da 4 chu so _ viet nghich dao cua so do

int main(){
    int a,x;
    printf("nhap vao 1 so duong co toi da 4 chu so \n");
    scanf("%d" ,&a);
    while (a<0 || a>9999){
        printf("So da nhap khong dung. Nhap lai so moi: \n");
        scanf("%d" ,&a);
    }x = 0;
    while (a/10 != 0){
        x = 10*x + a%10;
        a /= 10;
    }printf("So nghich dao cua so da cho la: %d" ,x);
}