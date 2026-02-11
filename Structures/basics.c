#include<stdio.h>
int main(){
    struct pokemon{  // pokemons character list
        int hp; // health
        int speed;            //hp,speed,attack,tier are known as attributes...
        int attack;
        char tier;    // position
    };  

    // struct pokemon{ 
    //     int hp; 
    //     int speed;          
    //     int attack;
    //     char tier;    
    // } pikachu, charizard, mewtwo;  // can also write like this so that character list donot have to mention seprrately...

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