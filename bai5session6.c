#include<stdio.h>
int main(){
    int m, y;
    printf("Nhap thang \n");
    scanf("%d", &m);
    printf("nhap nam \n");
    scanf("%d",&y);
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("ngay 31\n");
        break;
        case 4: case 6 : case 9 : case 11:
        printf("ngay 30\n");
        break;
        case 2:
        if((y % 400 == 0) && (y % 4 == 0 && 100 != 0)){
            printf("ngay 29\n");
        }
        else{
            printf("ngay 28\n");
        }
        break;
        default:
        printf("Du lieu khong hop le! \n");


    }

    return 0;

}