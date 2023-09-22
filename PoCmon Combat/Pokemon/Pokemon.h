//
// Created by Tristan on 21/09/2023.
//

#ifndef POCMON_POKEMON_H
#define POCMON_POKEMON_H


typedef struct Pokemon {
    char* name;
    int attack;
    int def;
    int pv;
    int pv_max;
    int vitesse;
    char* type;
    short mort;
}Pokemon;

typedef struct equipe{
    Pokemon* pokemons;
    int size;
}equipe;

#endif //POCMON_POKEMON_H
