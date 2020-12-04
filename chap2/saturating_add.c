#include<stdio.h>

int w=sizeof(int)*8;

int saturating_add(int x,int y){
int k=((x^(x+y))&(y^(x+y)))>>(w-1);
int t=k&(x>>(w-1));
printf("x: %d\ny: %d\nk: %x\nt: %x\n(x+y)|k: %x\nk&((1<<(w-1))^t): %x\n",x,y,k,t,(x+y)|k,k&((1<<(w-1))^t));
return ((x+y)|k)^(k&((1<<(w-1))^t));
}

void main(){
int x;
int y;
printf("x y:");
while(scanf("%x%x",&x,&y))
printf("added: %x\n",saturating_add(x,y));
}
