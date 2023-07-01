#include<stdio.h>
int power(int a, int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int a;
    printf("enter base:");
    scanf("%d",&a);
    int b;
    printf("enter power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("a base to the power b is %d",p);
    return 0;
}