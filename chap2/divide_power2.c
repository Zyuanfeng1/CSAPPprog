#include<stdio.h>

int w=sizeof(int)*8;

int divide_power2(int x,int k){
int bias=((1<<k)-1)&(x>>(w-1));
return (x+bias)>>k;
}

void main(){
int x=-12340;
int i;
int k=0;
int power=1;
for(i=0;i<=3;i++){
printf("x: %x %d i: %d power:%d k: %d  divided: %x %d\n",x,x,i,power,k,divide_power2(x,k),divide_power2(x,k));
power=power*2;
k=power;
}
}

