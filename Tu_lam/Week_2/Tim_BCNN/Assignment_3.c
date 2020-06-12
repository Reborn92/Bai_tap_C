/* Cach 3: Tim BCNN bang cach phan tich thua so nguyen to cua hai so a va b
            Tao mot so dem la mu cua cac so nguyen to khi phan tich duoc
            Khi so dem > 0 thi do la thua so nguyen to cua so do
            Neu i bang nhau thi ta so sanh so dem nao lon hon thi cho vao tich cua BCNN
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    int dem1, dem2;
    float BCNN = 1;
    printf("Nhap vao so nguyen thu nhat : \n");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai : \n");
    scanf("%d", &b);
    a = abs(a);
    b = abs(b);
    for(int i = 2; i <= a || i <=b; i++){
        dem1 = 0;
        while(a%i == 0){
            dem1++;
            a /= i;
        }
        dem2 = 0;
        while(b%i == 0){
            dem2++;
            b /= i;
        }
    if(dem1 > 0 || dem2 > 0){
        if(dem1 > dem2){
            BCNN = BCNN * pow(i,dem1);
        }else{
            BCNN = BCNN * pow(i,dem2);
        }
    }    
    }printf("Boi chung nho nhat cua hai so la : %lf\n",BCNN);
}