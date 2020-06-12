#include <stdio.h>
/* In ra chữ số đầu tiên của một số nguyên number nhập từ bàn phím
ví dụ: 12345 => 12345
*/

int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    int last = number;
    for(;last > 9;last /= 10){        
    }printf("Chu so dau tien cua %d la %d", number, last);
}