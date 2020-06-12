#include <stdio.h>
// Hoan vi 2 so nguyen su dung toan tu * va /
int main(){
    int a,b;
    printf("Nhap vao 2 so bat ki a va b: \n");
    scanf("%d %d" , &a, &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("So hai so sau khi da hoan vi la %d %d \n" ,a ,b);
}