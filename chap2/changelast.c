#include<stdio.h>

int main(){
int x=0x89ABCDEF;
int y=0x76543210;
printf("0x%x\n",(0xFF&x)+(0xFFFFFF00&y));
system("ls");
}
