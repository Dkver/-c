#include<stdio.h>
int main(){
    int r;   // r number of rows
    printf("enter the number of rows :");
    scanf("%d",&r);
    int c;   // c numbert of column
    printf("enter the number of column :");
    scanf("%d",&c);
    printf("enter all the number :\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }
        printf("\n");
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
    return 0;
}