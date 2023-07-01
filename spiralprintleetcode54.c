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
    //spiralprint9ing
    printf("\n");
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc;j++){
            printf("%d ",arr[minr][j]);
             count++;
        }
        minr++;
        if(count>=tne) break;
        //print the max imum column
        for(int i=minr;i<=maxr;i++){
            printf("%d ",arr[i][maxc]);
             count++;
        }
        maxc--;
        if(count>=tne) break;
        //print the max row
        for(int j=maxc;j>=minc;j--){
            printf("%d ",arr[maxr][j]);
             count++;
        }
        maxr--;
        if(count>=tne) break;
        //print the minimum column
        for(int i=maxr;i>=minr;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}