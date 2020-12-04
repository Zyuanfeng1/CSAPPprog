#include<stdio.h>

void main(){
int x=0x00011100;
int y=0x00000000;
int z=0xffffffff;
printf("x: %x\ny: %x\nz:%x\n",x,y,z);
printf("!~x: %x\n!~y: %x\n!~z: %x\n",!~x,!~y,!~z);
printf("!!~x: %x\n!!~y: %x\n!!~z: %x\n",!!~x,!!~y,!!~z);
}
