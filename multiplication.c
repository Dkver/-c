#include<stdio.h>
int main(){
    int r;    // r= no of rows
    printf("enter the number of rows :");
    scanf("%d",&r);
    int c;    //c= no of column
    printf("enter the number of column :");
    scanf("%d",&c);
    printf("enter all the element :\n");
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int n;    // n= no of rows
    printf("enter the number of rows :");
    scanf("%d",&n);
    int m;    //m= no of column
    printf("enter the number of column :");
    scanf("%d",&m);
    printf("enter all the element :\n");
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //check
    if(c!=n){
        printf("the matrix cant multiply");
    }
    else{
    int g[r][m];
    // multiplying
    int t=c;    // c=n
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            //code
            // i row of a[][] and j column of b[][]
            //(a[i][0],a[i][1],a[i][2]......)*(b[0][j],b[1][j],b[2][j]......)
             g[i][j]=0;
            for(int k=0;k<t;k++){
                g[i][j] +=a[i][k]*b[k][j];
            }
        }
     
    }
    
    // print g
    for(int i=0;i<r;i++){
        for(int j=0;j<m;j++){
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}