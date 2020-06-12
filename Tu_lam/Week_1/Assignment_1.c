#include <stdio.h>
// Bai tap ghi het ra cac ma ASCCII
int main(){
    int i;
    printf("Bang ma ASCCII la: \n");
    for (i = 0; i < 128; i++){
        printf("%5d%5c\n" ,i ,i); // %5d va %5c khac %d%c o cho 5 la khoang cach truoc khi in
    }
}