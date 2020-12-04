#include<stdio.h>

typedef unsigned float_bits;

float_bits float_denorm_zero(float_bits f){
unsigned sign=f>>31;
unsigned exp=f>>23&0xFF;
unsigned frac=f&0x7FFFFF;
if(exp==0)
frac=0;
return (sign<<31)|(exp<<23)|frac;
}

void main(){
float_bits x=1.25;
float y=0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000225;
float_bits y1=*(float_bits *)&y;
printf("x: %x\ny: %f\ny1: %u %x\ndenorm: %x\n",x,y,y1,y1,float_denorm_zero(y1));
}
