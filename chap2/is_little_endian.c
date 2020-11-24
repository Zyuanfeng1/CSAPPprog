#include<stdio.h>

typedef unsigned char *byte_pointer;

int is_little_endian(){
int i=1;
byte_pointer p=&i;
printf("pointer: %x\n",p);
return p[0];
}

void main(){
int i=is_little_endian();
printf("is_little_endian: %d\n",i);
}
