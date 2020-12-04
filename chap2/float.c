#include<stdio.h>

typedef unsigned float_bits;

void main(){
float x=1.5;
float y=1.125;
printf("x: %f\ny: %f\n",x,y);
unsigned ux=(unsigned)x;
unsigned uy=*(unsigned *)&y;
printf("ux: %u %x\nuy: %u %x\n",ux,ux,uy,uy);
float_bits sx=2.125;
float sx1=sx<<3;
printf("sx: %x %f\nsx1: %f\n",sx,sx,sx1);
}

