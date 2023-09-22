//
// Created by Tristan on 22/09/2023.
//
#include "Pokemon/Pokemon.h"
#include "sac.h"
#include "stdlib.h"


int pokeball(Pokemon equipe1){
    int pokeball = 1;
    int nombre = rand();
    if(nombre % 10 > 3){
        return 1;
    }
    else {
        return 0;
    }
}
int potion(){
    int potion = 1;
    return potion;
}
void soin(Pokemon * pokemon){

    if((pokemon->pv+ pokemon->pv_max/2) <= pokemon->pv_max){
        int soin = pokemon->pv + pokemon->pv_max/2;
    }


}