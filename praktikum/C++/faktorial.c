#include <stdio.h>

int faktorial(int n){
    int hasil=1;
    for(int i=1;i<=n;i++){
        hasil=hasil*i;
    }
    return hasil;
}

int main(){
    int n;
    printf("masukkan bilangan: ");
    scanf("%d",&n);
    printf("%d! = %d\n",n,faktorial(n));
    return 0;
}