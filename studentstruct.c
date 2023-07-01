#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void check( s1, s2){
   s1=s2;
    return;
}
int main(){
    typedef struct student{
        int rollno;
        char name[20];
        char dept[20];
        char course[30];
        int yearofjoining;
    } student;
    student s1,s2;

    typedef struct student s1{
        s1.rollno=35;
        strcpy(s1.name,"deepakverma");
        strcpy(s1.dept,"chemical");
        strcpy(s1.course,"chemicalandtechnology");
        s1.yearofjoining=2023;

        s1.rollno=28;
        strcpy(s1.name,"akhilsrivastava");
        strcpy(s1.dept,"cse");
        strcpy(s1.course,"computerscienceandengineringintechnology");
        s1.yearofjoining=2023;


        if(s1.dept==s2.dept) printf("the dept are same");
        else printf("the dept are different");

        fun(student);
    }
    return 0;
}