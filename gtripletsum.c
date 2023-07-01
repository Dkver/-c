#include<stdio.h>
int main(){
    int tripletsum=0;
    int x=23;
    int arr[20]={1,7,9,3,2,12,17,4,19,18,16,15,14,4,5,6,8,10,13,20};
    for(int i=0;i<20;i++){
        for(int j=i+1;j<20;j++){
            for(int k=j+1;k<20;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    tripletsum++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",tripletsum);
    return 0;
}