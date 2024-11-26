#include<stdio.h>
int main(){
    int matKhau = 8;
    printf("Moi ban nhap mat khau ");
    scanf("%d",&matKhau);
    if( matKhau == 8){
        printf("ban nhap mat khau dung roi\n");
    }else{
        printf("ban nhap mat khau sai roi");
    }

    return 0;
}