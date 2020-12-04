#include<stdio.h>

int w=sizeof(int)*8;

unsigned srl(unsigned x,int k){
unsigned xsra=(int)x>>k;
printf("arithmetic: %x\n",xsra);
return xsra&(~(-1<<(w-k)));
}

int sra(int x,int k){
int sral=(unsigned)x>>k;
printf("logic: %x\n",sral);
int sign=x&0x80000000&&1;
printf("sign:%x %d\n",sign,sign);
return sral|(((!sign)-1)<<(w-k));
}

void main(){
int x=0xffffffff,k=3;
unsigned u=0xffffffff;
printf("x: %x %x\n",srl(x,k),sra(x,k));

//while(scanf("%x %x %d",&x,&u,&k)){
//printf("srl:%x %u\n",srl(u,k),srl(u,k));
//printf("sra:%x %d\n",sra(x,k),sra(x,k));
//}
}
