/* nhap vao mot so nguyen duong N, hay phan tich so N thanh tich cac thua so nguyen to
vd: 8 = 2^3
100 = 2^2 *5 
thua so nguyen to y chi cac so do la so nguyen to.
*/
#include <stdio.h>

int main(){
    int a;
    printf("nhap mot so nguyen duong a bat ki: \n");
    scanf("%d" ,&a);
    for (int i = 2; a > 1; i++){
        while (a%i==0){
            printf("%d " ,i);
            a/=i;
            if(a>i){
                printf("*");
            }
        }
    }
}
