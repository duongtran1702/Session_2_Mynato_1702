#include<stdio.h>

int main(){
int a,b;
printf("Nhap a :");
scanf("%d",&a);
printf("Nhap b :");
scanf("%d",&b);
int sum=a+b;
float thuong=(float)a/b;
int hieu=a-b;
int tich=a*b;
printf("tong:%d+%d=%d\n",a,b,sum);
printf("hieu:%d-%d=%d\n",a,b,hieu);
printf("tich:%d*%d=%d\n",a,b,tich);
printf("thuong:%d/%d=%.2f",a,b,thuong);
return 0;
}