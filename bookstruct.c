#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noofpages;
        float price;
    } a,b,c;
    a.noofpages=100;
    a.price=411.5;
    strcpy(a.name,"secret seven");
    b.noofpages=200;
    b.price=500.5;
    strcpy(b.name,"famous");
    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
    return 0;
}