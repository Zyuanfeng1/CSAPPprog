#include<stdio.h>

int odd_ones(unsigned x){
x^=x>>1;
x^=x>>2;
x^=x>>4;
x^=x>>8;
x^=x>>16;
return x&0x1;
}

void main(){
printf("input: ");
unsigned x;
while(scanf("%x",&x)){
if(odd_ones(x))
printf("odd ones.\n");
else 
printf("Not odd ones.\n");
}
}


