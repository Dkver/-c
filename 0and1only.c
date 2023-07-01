#include<stdio.h>
int main(){
    int n;   //n no of rows
    printf("enter the value of n :");
    scanf("%d",&n);
    int m;   //m no of column
    printf("enter the value of m :");
    scanf("%d",&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int maxcount=0;
    int maxidx=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
        printf("\n");
    }
    printf("%d\n",maxidx);
    printf("%d",maxcount);
    return 0;
}