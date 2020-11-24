#include<stdio.h>

unsigned replace_byte(unsigned x,int i,unsigned char b){
char *p=&x;
p[i]=b;
return x;
}

void main(){
printf("0x%x\n",replace_byte(0x12345678,2,0xAB));
printf("0x%x\n",replace_byte(0x12345678,0,0xAB));
}
