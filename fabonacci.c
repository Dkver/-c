#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
   return fibo(n-1)+fibo(n-2);  //start from 1,1,2,3,5,8,13....
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}