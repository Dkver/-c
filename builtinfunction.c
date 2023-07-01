#include<stdio.h>
#include<string.h>
int main(){
    // char* str ="deepak verma";
    // int x= strlen(str);
    // printf("%d",x);
    char s1[13]="deepak verma";
    char s2[13];
    strcpy(s2,s1);
    s2[0]='m';
    printf("%s",s2);
    return 0;
}