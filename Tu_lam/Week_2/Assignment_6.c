// in dao nguoc 1 so chi bang cach in ki tu (de tranh viec in ra so 0 dau tien thi ta dung bien logic de kiem tra)
#include <stdio.h>

int main(){
    int a;
    printf("Nhap so can dao nguoc : \n");
    scanf("%d", &a);
    bool first = true;
    while(a>0){
        int temp = a%10;
        if(first == true){
            if (temp !=0){
                printf("%d", temp);
                first = false;
            }
        }else{
                printf("%d", temp);
        }
    }a=a/10;
}