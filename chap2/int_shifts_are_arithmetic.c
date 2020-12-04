#include<stdio.h>

int int_shifts_are_arithmetic(){
return -2>>1==-1;
}

int main(){
printf("-1>>2: %x\n",-1>>2);
if(int_shifts_are_arithmetic())
printf("int shifts are arithmetic.\n");
else 
printf("int shifts are not arithmetic.\n");
}
