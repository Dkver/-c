#include<stdio.h>
int main(){
    int m;   //r=no of rows
    printf("enter the number of column :");
    scanf("%d",&m);
    int n;   //c= no of column
    printf("enter the number of column :");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //waveprint
    printf("\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
            printf("%d ",arr[i][j]);
        }
        }
        else{
            for(int i=0;i<m;i++){
            printf("%d ",arr[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}