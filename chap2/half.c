#include<stdio.h>

main(){
float f[5];
f[0]=1.400001;
f[1]=1.600001;
f[2]=1.500001;
f[3]=2.500001;
f[4]=-1.500001;
int i;
for(i=0;i<5;i++){
unsigned u=*(unsigned *)&f[i];
float f1=0.5*f[i];
unsigned u1=*(unsigned *)&f1;
printf("f: %f %x 0.5*f: %f %x\n",f[i],u,0.5*f[i],u1);
}
}
