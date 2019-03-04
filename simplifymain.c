#include <stdio.h>
#include <stdlib.h>

int add(int a , int b){return a+b;}
int sub(int a , int b){return a-b;}
int mul(int a , int b){return a*b;}
int divi(int a , int b){return a/b;}

int (*ptr[8])(int a , int b)={0,0,mul,add,0,sub,0,divi};

int main(){
    char i;
    int a,b;
    printf("Key a Function \n EX:1+1\n");
    scanf("%i %c %i",&a,&i,&b);
    int index=i-'(';
    int result=(*ptr[index])(a,b);
    printf("%d \n",result);
}
