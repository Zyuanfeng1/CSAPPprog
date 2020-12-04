#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void *calloc(size_t nmemb,size_t size){
void *p;
if(nmemb==0||size==0)
return NULL;
int request_size=nmemb*size;
if(nmemb!=request_size/size)
return NULL;
else{
p=malloc(request_size);
if(p==NULL)
return NULL;
else
memset(p,0,request_size);
}
return p;
} 


void main(){
printf("%p\n",calloc(0,16));
printf("%p\n",calloc(1,0));
printf("%p\n",calloc(12345000,4096));
printf("%p\n",calloc(1024,4));
}
