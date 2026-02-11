#include<stdio.h>
int main(){
    struct pokemon{  // pokemons character list
        int hp; // health
        int speed;
        int attack;
        int tier;    // position
    };
    struct pokemon pikachu;
    pikachu.hp = 50;
    pikachu.attack = 60;
    printf("Enter attack of pikachu : ");
    scanf("%d",&pikachu.speed);
    // pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.hp = 80;
    charizard.attack = 130;
    charizard.speed = 80;
    charizard.tier = 's';

    struct pokemon mewtwo;
    mewtwo.hp = 150;
    mewtwo.attack = 170;
    mewtwo.speed = 200;
    mewtwo.tier = 'G';

    printf("%d",pikachu.speed);
    
    
    return 0;
}