#include <stdio.h>
// Hoan vi 2 so su dung toan tu + va -
int main(){
    int a,b;
    printf("Nhap vao 2 so bat ki : a va b \n");
    scanf("%d %d" ,&a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("So da duoc hoan vi la : %d %d \n" ,a,b);
}