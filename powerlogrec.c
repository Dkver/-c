#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    int recans=a*powerlog(a,b-1);
    return recans;
}
int main(){
    int a,b;
    printf("enter  a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int p= powerlog(a,b);
    printf("%d",p);
    return 0;
}