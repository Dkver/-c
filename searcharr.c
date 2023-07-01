#include<stdio.h>
int main(){
    int arr[7]={12,2,3,12,5,12,7};
    int x=12;
    int check =0;
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            check=10;
            printf("%d is present in the array its index is %d\n",x,i);
             break;  //if break is applied in the code the only one time code run ,if break remove then the other 12 is consider
        }
    }
    if(check==0){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is  present in the array",x);
    }
    return 0;
}