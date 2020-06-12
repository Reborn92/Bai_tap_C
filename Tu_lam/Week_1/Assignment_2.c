#include <stdio.h>
// Hoan vi 2 so su dung bien tam
int main(){
    int a,b,c; // su dung c la bien tam 
    printf("Nhap vao 2 so bat ki : a va b \n");
    scanf("%d %d" ,&a, &b);
    c = a;
    a = b;
    b = c;
    printf("So da duoc hoan vi la : %d %d \n" ,a,b);
}