#include<stdio.h>

unsigned f2u(float x);

int float_le(float x,float y){
unsigned ux=f2u(x);
unsigned uy=f2u(y);
printf("x: %x %f\ny: %x %f\nux: %x %u\nuy: %x %u\n",x,x,y,y,ux,ux,uy,uy);

unsigned sx=ux>>31;
unsigned sy=uy>>31;
printf("sx: %x %d\nsy: %x %d\n",sx,sx,sy,sy);
int k1=ux<<1==0&&uy<<1==0;

int k2=sx&&!sy;
int k3=!sx&&!sy&&ux<=uy;
int k4=sx&&sy&&ux>=uy;
printf("ux<<1==0&&uy<<1==0: %d\nsx%!sy: %d\n!sx&&!sy&&ux<=uy: %d\nsx&&sy&&ux>=uy: %d\n",k1,k2,k3,k4);
return k1||k2||k3||k4;
//return (ux<<1==0&&uy<<1==0)||(sx&&!sy)||(!sx&&!sy&&ux<=uy)||(sx&&sy&&ux>=uy);
}

//unsigned f2u(float x){
//return *(unsigned*)&x;
//}

void main(){
float x=4.55;
float y=-4.77;
printf("x: %x %f\ny: %x %f\nflaot_le: %d\n",x,x,y,y,float_le(x,y));
}
