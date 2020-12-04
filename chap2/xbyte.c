#include<stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word,int bytenum){
printf("word: %x\nbytenum: %d\nword>>(bytenum<<3): %x\n(word>>(bytenum<<3))&0xFF: %x\n",word,bytenum,word>>(bytenum<<3),(word>>(bytenum<<3))&0xFF);
int k=(int)((word>>(bytenum<<3))&0xff);
return k<<24>>24;
}

void main(){
packed_t t;
int n;
printf("packed_t bytenum:");
while(scanf("%x %d",&t,&n))
printf("xbyte: %x\n",xbyte(t,n));
}
