#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon ;
    pokemon a, b,c ;
    a.attack=100;
    a.hp=100;
    a.speed=90;
    a.tier='A';
    strcpy(a.name,"blastoise");
    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);
    b=a;   // b me bhi a aa gaya
    strcpy(b.name,"venusaur");
    b.attack=200;
    printf("%s",b.name);
    return 0;
}