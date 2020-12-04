#include<stdio.h>

void main(){
int x=10;
int k1=(x<<4)+x;
int k2=x-(x<<3);
int k3=(x<<6)-(x<<2);
int k4=(x<<7)+(x<<4);
printf("x: %x %d\n",x,x);
printf("k1: %x %d\n",k1,k1);
printf("k2: %x %d\n",k2,k2);
printf("k3: %x %d\n",k3,k3);
printf("k4: %x %d\n",k4,k4);
}
