#include<stdio.h>
int maze(int cr,int cc, int er ,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){  //only rightways call
        rightways +=maze( cr,cc+1,er,ec);
    }
    if(cc==ec){  //only downwards call
        downways +=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
       rightways +=maze( cr,cc+1,er,ec);
        downways +=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int n;  //no of rows
    printf("enter n:");
    scanf("%d",&n);
    int m;  //no of column
    printf("enter m:");
    scanf("%d",&m);
    int noofways=maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}