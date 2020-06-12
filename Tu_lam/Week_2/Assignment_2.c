#include <stdio.h>

int main(){
    int a;
    printf("Nhap so nguyen can kiem tra \n");
    scanf("%d", &a);
    bool allodd = true;
    while(a>0){
        int temp = a%10;
        if (temp %2 ==0){
            allodd = false;
            break;
        }a /=10;
    }if(allodd){
        printf("So nguyen can kiem tra toan la so le\n");
    }else{
        printf("So nguyen can kiem tra co so chan\n");
    }
}