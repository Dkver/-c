#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendrypokemon{
        pokemon normal;
        char ability[100];
    } legendrypokemon;
    typedef struct godpokemon{
        legendrypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"turnsintostone");
    arceus.legend.normal.attack=500;
    legendrypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=150;
    mewtwo.normal.attack=180;
    mewtwo.normal.speed=120;
    mewtwo.normal.tier='A';
    strcpy(mewtwo.normal.name,"mewtwo");
    return 0;
}