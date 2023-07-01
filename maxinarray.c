#include<stdio.h>
int main(){
    int arr[7]={10,12,9,7,13,2,14};
    int max=arr[0];         //or use int max=-1;also
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}