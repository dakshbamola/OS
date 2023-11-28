#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#define _XOPEN_SOURCE 600
int main(){
    fork();
    printf("hello daksh!!");
    return 0;
}