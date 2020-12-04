#include<stdio.h>

typedef unsigned float_bits;

float_bits float_negate(float_bits f){
unsigned sign=f>>31;
unsigned exp=f>>23&0xFF;
unsigned frac=f&0x7FFFFF;
if(!~exp&&!!frac)
return f;
else
return (!sign<<31)|(exp<<23)|frac;
}

void main(){
unsigned i=0x7f000000;
//for(i=0;i<(~0);i++){
float f=*(float *)&i;
float_bits f1=float_negate(i);
float f2=*(float *)&f1;
//printf("i: %u *(float *)&i: %f\n",i,f);
printf("i: %u *(float *)&i: %f -f: %f\n",i,f,f2);
//}
}
