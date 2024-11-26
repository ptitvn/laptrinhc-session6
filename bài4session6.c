#include<stdio.h>
int main(){
    int a, b, c, delta;
    double x1 ,x2;

    printf("moi ban nhap vao so a\n");
    scanf("%d",&a);
    printf("moi ban nhap vao so b\n");
    scanf("%d",&b);
    printf("moi ban nhap vao so c\n");
    scanf("%d",&c);
    delta= b*b - 4*a*c;
    if(delta>0){
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
    }else if(delta == 0){
        x1 = -b / (2*a);
        printf("phuong trinh co nghiem kep: x = %d",x1);
    }else{
        printf("phuong trinh vo nghiem\n");

    }

    return 0;
}