#include<stdio.h>
int main(){
int chieu_dai;
int chieu_rong;
printf("Nhap chieu dai:");
scanf("%d",&chieu_dai);
printf("Nhap chieu rong:");
scanf("%d",&chieu_rong);
int chu_vi=(chieu_dai+chieu_rong)*2;
int dien_tich=chieu_dai*chieu_rong;
printf("Dien tich cua hinh chu nhat la:%d",dien_tich);
printf("\nChu vi cua hinh chu nhat la:%d",chu_vi);
return 0;
}