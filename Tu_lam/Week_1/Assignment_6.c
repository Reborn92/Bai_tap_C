#include <stdio.h>
// tinh tong cac so chan trong doan [a,b]\

int main(){
    int a,b,S;
    printf("Nhap vao 2 so a,b sao cho a nho hon b: \n");
    scanf("%d%d", &a, &b);
    S = 0;
    for(int i = a; i<=b; i++){
        if(i%2 == 0){
            S += i;
        }
    }printf("Tong cac so chan trong doan a,b la: %d\n" ,S);
}