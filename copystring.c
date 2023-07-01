#include<stdio.h>
#include<string.h>
int main(){
//     char s1[]="physics wallah";
//     char*s2=s1;
//     s1[0]='m';
//     printf("%s",s2);   s2=shallow copy
//     return 0;
// }
//shallow copy
// char s1[]="physics wallah";
// char s2[]="physics wallah";
// s2[0]='m';
char s1[]="physics wallah";
char s2[]="physics wallah";
printf("%p\n",s1);    // %p use for address
printf("%p",s2);
return 0;
}