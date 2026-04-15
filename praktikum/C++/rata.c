#include <stdio.h>
void hitung_rata(){
 int n;
 printf("masukkan jumlah bilangan: ");
 scanf("%d", &n);

 float total=0, x;
 for(int i=1;i<=n;i++){
  printf("bilangan ke-%d: ", i);
  scanf("%f", &x);
  total=total+ x;
 }

 float rata=total/n;
 printf("rata-rata= %.2f\n", rata);
}

int main(){
 hitung_rata();
 return 0;
}