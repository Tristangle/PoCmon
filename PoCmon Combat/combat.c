//
// Created by Tristan on 21/09/2023.
//
#include "Pokemon/Pokemon.h"
#include "sac.c"
#include "Tours/Tours.c"
// SELECT PREMIER POKEMON

// INTERFACE ATTAQUE / FUITE
void attaque(Pokemon * pokemon1, Pokemon * pokemon2, int nombreDeTours){
    if(pokemon1->vitesse > pokemon2->vitesse && nombreDeTours % 2 == 1){
        pokemon2->pv =  (pokemon1->attack - pokemon2->def);
        if(pokemon2->pv <= 0){
            pokemon2->mort = 1;
            pokemon2->pv = 0;
        }
    }
    else{
        pokemon1->pv = (pokemon2->attack - pokemon1->def);
        if(pokemon1->pv <= 0){
            pokemon1->mort = 1;
            pokemon1->pv = 0;
        }
    }
}

int sac[2];

// SYSTEME DE TOURS V

// DEBUT ATTAQUE V

// STATS VITESSE FIRST ATTACk V

// CHOIX ATTAQUE CHANGER SAC FUIR

// ATTAQUE STATS ATK DEF TYPE V

// CHANGER POKEMON

// REMPLACEMENT POKEMON

// SAC OUVRE AUTRE CHOIX D'ITEMS TABLEAUX

//POKEBALL V

// SOINS V

// FUIR 1/2 DE QUITTER LE COMBAT