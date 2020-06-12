/* Cach 2: Tim BCNN bang tinh chat BCNN phai chia het cho ca 2 so.
Tu do ta lay so lon hon nhan len roi chia cho so nho hon
Den khi chia het thi do la BCNN - break
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, BCNN;
    printf("Nhap vao so nguyen thu nhat: \n");
    scanf("%d", &a);
    printf("Nhap vao so nguyen duong thu hai: \n");
    scanf("%d", &b);
    a = abs(a);
    b = abs(b);
    if(a<b){
        a = a + b;
        b = a - b;
        a = a - b; // dao nghuoc a va b neu a nho hon b
    }for(int i = 1; i <= a*b; i++){
        BCNN = a * i;
        if(BCNN % b == 0){
            break;
        }
    }printf("Boi chung nho nhat cua hai so la : \n %d", BCNN);
}