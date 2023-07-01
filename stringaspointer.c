#include<stdio.h>
#include<string.h>
int main(){
    // char str[]="college wallah";
    //  char* ptr=str;      //ptr now point to first element
    // int i=0;
    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }
    // char* ptr="college wallah";
    // ptr="physics wallah";
    // printf("%s",ptr);
    char str[]="college wallah";
    char* ptr=str;
    ptr="physics wallah";
    printf("%s",str);
    return 0;
}