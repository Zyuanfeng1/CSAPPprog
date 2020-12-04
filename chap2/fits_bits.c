#include<stdio.h>

int w=sizeof(int)*8;

int fits_bits(int x,int n){
int x1=x<<(w-n)>>(w-n);
printf("x: %x %d\nx1: %x\n",x,x,x1);
return x==x1;
}

void main(){
int x;
int n;
printf("input x n: ");
while(scanf("%x %d",&x,&n)){
printf("is_fits_bits: %d\n",fits_bits(x,n));
}
}
