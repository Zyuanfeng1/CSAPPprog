#include<stdio.h>

int int_size_is_32(){
int set_msb=1<<31;
int beyond_msb=1<<31;
beyond_msb<<=2;
printf("set_msb_32: %x\nbeyond+msb_32: %x\n",set_msb,beyond_msb);
return set_msb&&!beyond_msb;
}

int int_size_is_16(){
int set_msb=1<<15;
int beyond_msb=1<<15;
beyond_msb<<=2;
printf("set_msb_16: %x\nbeyond_msb_16: %x\n",set_msb,beyond_msb);
return set_msb&&!beyond_msb;
}

void main(){
if(int_size_is_32())
printf("int size is 32.\n");
else
printf("int size is not 32\n");
if(int_size_is_16())
printf("int size is 16.\n");
else
printf("int size is not 16.\n");
}
