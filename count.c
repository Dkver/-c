#include<stdio.h>
int main(){
    int arr[5]={1,3,7,9,2};
    for(int i=0;i<5;i++){
        if(arr[i]>4){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}