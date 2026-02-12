#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int hp;
        int speed;
        char tier;
        int attack;
    }pokemon;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 120;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Pokemon");

    arr[1].attack = 150;
    arr[1].hp = 100;
    arr[1].speed = 80;
    arr[1].tier = 'A';
    strcpy(arr[1].name,"Charizard");

    arr[2].attack = 120;
    arr[2].hp = 80;
    arr[2].speed = 90;
    arr[2].tier = 'S';
    strcpy(arr[2].name,"Mewtwo");

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("Hp : %d\n",arr[i].hp);
        printf("Tier : %c\n",arr[i].tier);
        printf("Attack : %d\n",arr[i].attack);
        printf("Speed : %d\n\n",arr[i].speed);

    }

    return 0;
}