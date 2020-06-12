/* Cach 1: Tim boi chung nho nhat qua viec cho i chay tu so to hon den tich a*b
Neu i chia het cho ca a va b thi i la BCNN cua 2 so
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, BCNN;
    int i;
    printf("Nhap vao so nguyen thu nhat : \n");
    scanf("%d", &a);
    printf("Nhap vao so nguyen thu hai : \n");
    scanf("%d", &b);
    a = abs(a);
    b = abs(b);
    if(a<b){
        a = a + b;
        b = a - b;
        a = a - b; // De chuyen doi cho luon luon a la so lon nhat        
    }for(i = a; i <= (a*b); i++){
        if(i % a == 0 && i % b == 0){
            BCNN = i; // Luu y phep gan - i = BCNN khac voi BCNN = i
            break;
        }
    }printf("Boi chung nho nhat cua hai so tren la : %d\n" ,BCNN);
    printf("%d %d", a, b);
}

