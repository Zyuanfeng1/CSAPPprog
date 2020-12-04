#include<stdio.h>

int leftmost_one(unsigned x){
x|=x>>1;
x|=x>>2;
x|=x>>4;
x|=x>>8;
x|=x>>16;
return x&(~x>>1);
}

void main(){
unsigned x;
printf("input: ");
while(scanf("%x",&x))
printf("leftmost: %x\n",leftmost_one(x));
}
