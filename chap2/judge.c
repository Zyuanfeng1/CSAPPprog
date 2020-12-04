#include<stdio.h>

void main(){
int x;
while(scanf("%x",&x)){
printf("int: %d\n",sizeof(int));
printf("x: %d\n",x);
printf("a: %x %d\n",~x,!~x);
printf("b: %x %d\n",x,!x);
printf("c: %x %d\n",(~x|(-1<<8)),!~(x|(-1<<8)));
printf("d: %x %d\n",x&(-1<<24),!(x&(-1<<24)));
}
}
