#include<stdio.h>

int main(){

    int num1, num2, num3, num4, num5;
    int tong=0;
    printf("moi ban nhap vao so tu nhien thu1\n");
    scanf("%d",&num1);
    printf("moi ban nhap vao so tu nhien thu2\n");
    scanf("%d",&num2);
    printf("moi ban nhap vao so tu nhien thu3\n");
    scanf("%d",&num3);
    printf("moi ban nhap vao so tu nhien thu4\n");
    scanf("%d",&num4);
    printf("moi ban nhap vao so tu nhien thu5\n");
    scanf("%d",&num5);
    if(num1 % 2!= 0){
       tong+=num1;   
    }
    if(num2 % 2!= 0){
       tong+=num2;   
    }
    if(num3 % 2!= 0){
       tong+=num3;   
    }
    if(num4 % 2!= 0){
       tong+=num4;   
    }
    if(num5 % 2!= 0){
       tong+=num5;   
    }
    
    
    printf("tong cac so le la %d\n",tong);

   

    return 0;
}