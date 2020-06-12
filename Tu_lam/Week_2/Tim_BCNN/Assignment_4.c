/* Cach 4 : Tim BCNN thong qua UCLN
            ta tim UCLN bang cach tru lan luot a va b cho nhau den khi a = b 
            Kiem tra uoc do so lon hon co chia het khong. chia het thi luu lai va tiep tuc cho den khi i chay den so be hon
            Sau khi tim duoc UCLN ta tim BCNN bang cach :
            a*b = BCNN * UCLN --> BCNN = (a*b)/UCLN
*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    int UCLN = 1, BCNN;
    int x,y;
    printf("\nNhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("\nNhap so nguyen thu hai : ");
    scanf("%d", &b);
    a = abs(a);
    b = abs(b);
    if(a == 0 || b == 0){
        printf("Khong co UCLN va BCNN");
    }
    x = a;
    y = b;
    while(x!=y){
        if(x>y){
            x -=y;
        }else{
            y -=x;
        }UCLN = x;
    }BCNN = (a*b)/UCLN;
    printf("\nBoi chung nho nhat cua hai so la: %d", BCNN);
}