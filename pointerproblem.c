#include<stdio.h>
typedef int* pointer;
int main(){
    int x=5,y=3;
    int* a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}