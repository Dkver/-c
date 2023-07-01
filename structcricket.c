#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char firstname[20];
        char lastname[20];
        int age;
        int noofmatches;
        float average;
    } cricketer;
    cricketer arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<3;i++){
        printf(" name : %s\n",arr[i].firstname,arr[i].lastname);
        printf(" age : %d\n",arr[i].age);
        printf(" no of matches played : %d\n",arr[i].noofmatches);
        printf(" average run scored : %f\n",arr[i].average);
    }
    return 0;
}