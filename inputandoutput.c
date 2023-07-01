#include<stdio.h>
#include<string.h>
int main(){
    // char str[]="collage wallah is best";
    // printf("%s",str);
    // puts("hello everyone");
    char str[40];
    // scanf("%s",str);  //only the first word is considered
    gets(str);   // entire sentense is taking as input 
    printf(" your input was :%s",str);
    return 0;
}