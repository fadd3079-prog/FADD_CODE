#include <stdio.h>
int ages[100];
void main(){
    for(int i=0;i<100;i++){
        ages[i]=i;
    } 
    for(int j=0;j<100;j++){
        printf("%d \n",ages[j]);
    }
}