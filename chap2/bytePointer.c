#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len){
size_t i;
for (i=0;i<len;i++)
printf(" %.2x",start[i]);
printf ("\n");
}

void show_int(int x){
printf("int: %d",x);
show_bytes((byte_pointer)&x,sizeof(int));
}

void show_float(float x){
printf("float: %f",x);
show_bytes((byte_pointer)&x,sizeof(float));
}

void show_pointer(void *x){
printf("pointer: ");
show_bytes((byte_pointer)&x,sizeof(void *));
}

void show_short(short s){
printf("short: %d",s);
show_bytes((byte_pointer)&s,sizeof(short));
}

void show_long(long l){
printf("long: %l",l);
show_bytes((byte_pointer)&l,sizeof(long));
}

show_double(double d){
printf("double: %lf",d);
show_bytes((byte_pointer)&d,sizeof(double));
}

void test_show_bytes(int val){
int ival=val;
short sval=(short) ival;
long lval=(long) ival;
float fval=(float) ival;
double dval=(double) ival;
int *pval=&ival;
show_int(ival);
show_short(sval);
show_long(lval);
show_float(fval);
show_double(dval);
show_pointer(pval);
}

void  main(){
int  val=12345;
test_show_bytes(val);
}
