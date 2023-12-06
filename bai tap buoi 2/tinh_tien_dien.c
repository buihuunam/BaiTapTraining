//tính tiền điện
#include<stdio.h>
int main(){
    int so_dien_su_dung, gia_tien;
    //nhập số điện đã sử dụng trong tháng
    printf("nhap so dien da su dung: ");
    scanf("%d",&so_dien_su_dung);
    //các mức sử dụng điện trong tháng
    if(so_dien_su_dung <= 100){
        //nếu trong tháng sử dụng ít hơn 100kwh thì sẽ tính theo mức này
        gia_tien = so_dien_su_dung * 100;
    } else if(so_dien_su_dung >= 101 && so_dien_su_dung <= 150 ){
        //nếu sử dụng từ khoảng 101->150
        gia_tien = 100*600 +(so_dien_su_dung - 100)* 900;
    } else if(so_dien_su_dung >= 151 && so_dien_su_dung <= 250){
        //nếu sử dụng từ 151 đến 250
        gia_tien = 100 * 600 + 50 * 900 + (so_dien_su_dung - 150) * 1200;
    } else{
        //nếu sử dụng từ 251 trở lên
        gia_tien = 100 * 600 + 50 * 900 + 100 * 1200 + (so_dien_su_dung - 250) * 1500;
    }
    printf("tien dien thang nay la: %d", gia_tien);
    return 0;
}
