#include <stdio.h>
#include <stdlib.h>

int add(int a , int b){return a+b;}
int sub(int a , int b){return a-b;}
int mul(int a , int b){return a*b;}
int divi(int a , int b){return a/b;}

int (*ptr[4])(int a , int b)={add,sub,mul,divi};

int main(){
    int index;
    int a,b;
    printf("Choose mode:0:\"+\" 1:\"-\" 2:\"*\" 3:\"/\" \n");
    scanf("%i %i %i",&index,&a,&b);
    int result=(*ptr[index])(a,b);
    printf("%d \n",result);
}
