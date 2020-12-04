#include<stdio.h>

typedef unsigned float_bits;

float_bits float_twice(float_bits f){
unsigned sign=f>>31;
unsigned exp=f>>23&0xFF;
unsigned frac=f&0x7FFFFF;
if(!~exp&&!!frac)
return f;
else{
if(!exp){
if(!(frac>>22))
frac<<=1;
else{
exp=1;
frac<<=1;
}
}
else {
++exp;
if(!~exp)
frac=0;
}
}
return (sign<<31)|(exp<<23)|frac;
}

void main(){
unsigned i=0x007fffff;
//unsigned j=0x0000ffff;
//for(i=0;i<(~0);i++){
float f=*(float *)&i;
float tf=f*2;
float_bits f1=float_twice(i);
float f2=*(float *)&f1;
//printf("i: %u *(float *)&i: %f\n",i,f);
printf("i: %u *(float *)&i: %.50f 2*f: %.50f tf: %.50f\n",i,f,f2,tf);
//printf("i: %u *(float *)&i: %f -f: %f tf: %f\n",i,f,f2,tf);
//}
}
