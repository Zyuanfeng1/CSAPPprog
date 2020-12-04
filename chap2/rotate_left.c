#include<stdio.h>

int w=sizeof(int)*8;

unsigned rotate_left(unsigned x,int n){
int m=~0<<(w-n);
printf("m: %x\nx<<n: %x\nx>>(w-n): %x\n~(~0<<n): %x\n",m,x<<n,x>>(w-n),~(~0<<n));
printf("(x>>(w-n))&(~(~0<<n)): %x\n",(x>>(w-n))&(~(~0<<n)));
return (x<<n)+(x>>(w-n));
}

void main(){
unsigned x;
int n;
printf("-1>>2: %x\nx>>n: %x",-1>>2,x>>n);
printf("x,n:");
while(scanf("%x%d",&x,&n))
printf("rotated: %x\n",rotate_left(x,n));
}
