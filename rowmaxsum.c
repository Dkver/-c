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
    int maxsum=0;
    int maxidx=0;
    for(int i=0;i<n;i++){
       int count=0; 
        for(int j=0;j<m;j++){
            maxsum+=a[i][j];
            }
            if(maxsum<count){
                maxsum=count;
                maxidx=i;
            }
            printf("\n");
        }
        printf("%d\n",maxsum);
    return 0;
}