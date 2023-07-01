#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,2,3,4,5,8,7,8};
    int max=INT_MIN;
    int smax=INT_MIN;
    // for(int i=0;i<8;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    // for(int i=0;i<8;i++){
    //     if(arr[i]!=max && smax<arr[i]){
    //         smax=arr[i];
    //     } 
    // }       
    for(int i=0;i<8;i++){    //2nd type to get or if numbers are repeated then code is wrong
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}