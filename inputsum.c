#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    int m;
    printf("enter the value of m :");
    scanf("%d",&m);
    printf("enter all the element\n");
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=a[i][j];
        }
    } 
    printf("%d ",sum); 
    return 0;
}