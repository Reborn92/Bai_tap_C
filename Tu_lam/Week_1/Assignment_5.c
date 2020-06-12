#include <stdio.h>
#define GIOI "\nXep loai gioi"
#define KHA "\nXep loai kha"
#define TB "\nXep loai trung binh"
#define YEU "\nXep loai yeu"
/*
Nhap vao điểm 3 môn toán, văn, anh của 1 học sinh, viết chương trình đưa ra xếp loại của học sinh đó theo điểm trung bình như sau:
-   [0, 4.0]: Yếu
-   [4,0, 6.5]: Trung bình
-   [6,5, 8.0]: Khá
-   [8.0, 10]: Giỏi
*/
int main(){
    // nhap diem 3 mon
    float diemToan,diemVan,diemAnh,dtb;
    printf("Nhap diem toan cua hoc sinh: ");
    scanf("%f" ,&diemToan);
    printf("Nhap diem van cua hoc sinh: ");
    scanf("%f" ,&diemVan);
    printf("Nhap diem Anh cua hoc sinh: ");
    scanf("%f", &diemAnh);
    dtb = (diemToan + diemVan + diemAnh)/3;
    printf("Diem trung binh cua hoc sinh la : %f\n" ,dtb);
    if (dtb <4.0){
        printf(YEU);
    }else if (dtb<6.5){
        printf(TB);
    }else if (dtb<8.0){
        printf(KHA);
    }else {
        printf(GIOI);
    }
}