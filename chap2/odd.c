#include<stdio.h>

int any_odd_one(unsigned x){
int t=0x55555555;
return !(x&t);
}

void main(){
unsigned x;
printf("hello\n");
//scanf("input: %x\n",&x);
while(scanf("%x",&x)){
if(any_odd_one(x))
printf("There is no odd\n");
else
printf("There is odd\n");
//printf("is_odd: %d\n",any_odd_one(x));
}
}
