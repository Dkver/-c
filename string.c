#include<stdio.h>
int main(){
    char arr[]="collage wallah is best";   // in this type of representation nul(\0) already created thatb has 23 char in the arr
    int i=0;                                // in {'a','b'} \0 is not given by the the code
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}