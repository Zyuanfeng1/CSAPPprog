#include<stdio.h>
#include<inttypes.h>

int signed_high_prod(int x,int y){
int64_t mul=(int64_t)x*y;
printf("x: %lx %d\ny: %lx %d\nint64_t x: %lx\nint64_t y: %lx\nx*y: %x %ld\nint64 x*y %lx %ld\n",x,x,y,y,(int64_t)x,(int64_t)y,x*y,x*y,(int64_t)x*y,(int64_t)x*y);
return mul>>32;
}

unsigned unsigned_high_prod_ref(unsigned x,unsigned y){
printf("unsigned x: %x %u\nunsigned y: %x %u\nunsigned x*y: %lx %lu\n",x,x,y,y,(int64_t)x*y,(int64_t)x*y);
return ((int64_t)x*y)>>32;
}

unsigned unsigned_high_prod(unsigned x,unsigned y){
uint64_t k1=(uint64_t)signed_high_prod((int)x,(int)y)<<32;
uint64_t k2=(int)x*(int)y&0x00000000ffffffff;
uint64_t k3=((uint64_t)x>>31<<32)*(uint64_t)y;
uint64_t k4=((uint64_t)y>>31<<32)*(uint64_t)x;
uint64_t result=k1+k2+k3+k4;
uint64_t x1=(unsigned)(int)x;
uint64_t y1=(int)y;
printf("(int)x: %lx\n(int)y: %lx\n",x1,y1);
printf("mul: %x %lx\n",(int)x*(int)y,(int)x*(int)y);
printf("(int)x: %x %d\n(int)y: %x %d\nsigned_high<<32: %lx %lu\n(int)x*(int)y: %lx %lu\n((uint64_t)x>>31<<32)*(uint64_t)y: %lx %ld\n((uint64_t)y>>31<<32)*(uint64_t)x: %lx %lu\nresult: %lx %lu\n",x,x,y,y,k1,k1,k2,k2,k3,k3,k4,k4,result,result);
return result>>32;
}

void main(){
int x=0xefffffff;
int y=0x40000000;
//printf("x y:");
//while(scanf("%d%d",&x,&y)) 
printf("signed_multiplied: %x\n",signed_high_prod(x,y));
printf("unsigned_multiplied: %x\n",unsigned_high_prod_ref((unsigned)x,(unsigned)y));
printf("unsigned_multiplied2: %x\n",unsigned_high_prod((unsigned)x,(unsigned)y));
}
