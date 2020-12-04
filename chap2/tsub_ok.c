#include<stdio.h>

int w=sizeof(int)*8;

int tsub_ok(int x,int y){
int k=(x^(x-y))&((-y)^(x-y));
printf("x: %d\n-y: %d\nk: %x\nt: %x\nx^(x-y): %x\n(-y)^(x-y): %x\n",x,-y,x^(x-y),(-y)^(x-y));
return k&&1;
}

void main(){
int x;
int y;
printf("x y:");
while(scanf("%x%x",&x,&y))
printf("tsub: %x\n",tsub_ok(x,y));
}
