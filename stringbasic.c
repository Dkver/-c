#include<stdio.h>
int main(){
    //  char arr[5]={'a','t','l','b','s'};
    //  for(int i=0;i<5;i++){
    //     printf("%c\n ",arr[i]);
    //  }
    // type casting 
    // char ch='a';
    //  int x =(int)ch;
    //  printf("%d\n",x);
    //  char ch='A';
    //  int x =(int)ch;
    //  printf("%d\n",x);
    //  char ch='z';
    //  int x =(int)ch;
    //  printf("%d\n",x);
    //  char ch='Z';
    //  int x =(int)ch;
    //  printf("%d\n",x);
    //  char ch='0';
    //  int x =(int)ch;
    //  printf("%d\n",x);
    // char ch='9';
    // int x =(int)ch;
    // printf("%d\n",x);
    // int arr[]={1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     printf("%d ",arr[i]);
    // }
    // char arr[]={'h','e','l','l','o','\0'};
    // int i=0;
    // while(arr[i]!='\0'){
    //     printf("%c ",arr[i]);
    //     i++;
    // }
    char arr[]={'h','e','l','l','o','!'};
    int i=0;
    while(arr[i]!='!'){
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}