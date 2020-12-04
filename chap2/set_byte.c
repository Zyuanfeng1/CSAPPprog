#include<stdio.h>

int set_byte(int j,int k){
int a=(~0)<<k;
int k1=((~0)<<j);
int k2=(~((~0)<<(j+k)));
int b=k1&k2;
printf("a: %x\nk1: %x\nk2: %x\nb: %x\n",a,k1,k2,b);
}

void main(){
set_byte(5,5);
}
