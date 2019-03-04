#include <stdio.h>
#include <stdlib.h>

void add(int *a , int *b){*a = *a+*b;}
void sub(int *a , int *b){*a = *a-*b;}
void mul(int *a , int *b){*a = *a * *b;}
void divi(int *a , int *b){*a = *a / *b;}

void (*ptr[8])(int *a , int *b)={0,0,mul,add,0,sub,0,divi};

int main(){
    char i;
    int a,b;
    printf("Key a Function \n EX:1+1\n");
    scanf("%i %c %i",&a,&i,&b);
    int index=i-'(';
    printf("%d",a);
    ptr[index](&a,&b);
    printf(" %c %d = %d \n",i,b,a);
}
