#include<stdio.h>
int main(){
    int totalpairs=0;
    int x=11;
    int arr[9]={1,3,5,2,7,8,10,4,6};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}