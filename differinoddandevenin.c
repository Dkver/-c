#include<stdio.h>
int main(){
    int sum1=0;  //1 for even 
    int sum2=0;  //2 for odd
    int diff;
    int arr[5]={7,4,6,8,3};
    for(int i=0;i<5;i++){
        if(i%2==0) sum1=sum1+arr[i];
        else sum2=sum2+arr[i];
        diff=sum1-sum2;
    }
    printf("%d",diff);
    return 0;
}