#include<stdio.h>

int w=sizeof(int)*8;

int threefourths(int x){
int former_bits=x&(~0x3);
int later_bits=x&(0x3);
printf("former_bits: %x %d\nlater_bits: %x %d\n",former_bits,former_bits,later_bits,later_bits);
former_bits=former_bits>>2;
former_bits=(former_bits<<1)+former_bits;

later_bits=(later_bits<<1)+later_bits;
int bias=(x>>w-1)&((1<<2)-1);
printf("bias: %x %d\n",bias,bias);

later_bits=(later_bits+bias)>>2;
return former_bits+later_bits;
}

void main(){
int x=0x44444444;
int y=threefourths(x);
printf("threefourthed: %x %d\n",y,y);
}
