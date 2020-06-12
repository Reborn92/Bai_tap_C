/* Kiểm tra một số nguyên mà nó được tạo thành từ các số chẵn hay không
ví du: 8, 222, 246, ................
*/
#include <stdio.h>

int main(){
    int a;
    printf("Nhap so nguyen can kiem tra : \n");
    scanf("%d" ,&a);
    bool alleven = true;
    while(a>0){
        int temp = a%10;
        if (temp %2 == 1){
            alleven = false;
            break;
        }a/=10;
    }if(alleven){
        printf("Toan chu so chan\n");
    }else{
        printf("Co chu so le\n");
    }
}