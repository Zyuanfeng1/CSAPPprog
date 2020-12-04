#include<stdio.h>

int lower_one_mask(int n){
return ~(~0<<n-1<<1);
}

void main(){
int n;
printf("int: ");
scanf("%d",&n);
printf("mask: %x\n",lower_one_mask(n));
}
