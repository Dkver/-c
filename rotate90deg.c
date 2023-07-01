#include<stdio.h>
int main(){
    int r;   //r=no of rows
    printf("enter the number of rows :");
    scanf("%d",&r);
    int c;   //c= no of column
    printf("enter the number of column :");
    scanf("%d",&c);
    printf("enter all the number :\n");   // r=c in this code
    //input
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    for(int i=0;i<r;i++){
        for(int j=i;j<c;j++){
            //swap arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("\n");
    //output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //rotate
    for(int i=0;i<r;i++){
        int p=0;
        int k=r-1;
        while(p<k){
            //swap arr[i][j] and arr[i][k]
            int temp=arr[i][p];
            arr[i][p]=arr[i][k];
            arr[i][k]=temp;
            p++;
            k--;
        }
    }
    printf("\n");
    //output
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

