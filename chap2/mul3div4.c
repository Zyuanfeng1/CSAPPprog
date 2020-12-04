#include<stdio.h>

int w=sizeof(int)*8;

int mul3div4(int x){
int mul=(x<<1)+x;
printf("mul: %x %d\n",mul,mul);
int bias=(mul>>(w-1))&((1<<1)-1);
return (mul+bias)>>2;
}

void main(){
int x=0x44444444;
printf("x: %x %d\nmul3div4: %x %d\n",x,x,mul3div4(x),mul3div4(x));
}
