//
// Created by Tristan on 21/09/2023.
//

#include "Pokemon.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


// Récupérer équipe


// Récupérer Stats & nom pokemon
int recuperationStat(Pokemon * equipeDresseur){

    char name[1000];
    int pv;
    int vitesse;
    int attack;
    int def;
    char type[100];
    // LIRE LE FICHIER CSV

    FILE *f = fopen("/Users/Tristan/Desktop/PoCmon/poCmon.csv", "r"); // récupérer la liste
    if(f == NULL){
        printf("Erreur");
    }
    Pokemon * pokemon = malloc(sizeof(equipeDresseur)*12);
    char c = fgetc(f);
    int line = 1;
    while(c != EOF) {
        c = fgetc(f);
        if(c == '\n') {
            line++;
        }
    }
    fclose(f);
    f = fopen("poCmon.csv", "r");
    fgets(malloc(sizeof (char) * 100), 100, f);
    for(int i = 0; i < line; i++) {
        Pokemon* p = malloc(sizeof(Pokemon*));
        fscanf(f,"\n%[^;];%d;%d;%d;%d;%s", p->name, &p->pv, &p->vitesse, &p->attack, &p->def, p->type);
        p->pv_max = p->pv;
        printf("\n\n\n");
    }
    fclose(f);
    return 0;

}
/*float types(equipe* equipeDresseur, equipe* equipe2){
    float coefficiant [18][18] = {1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0,1,1,0.5,1,0.5,0.5,0.5,2,1,2,1,1,1,1,1,2
    }
    if(strcmp(equipeDresseur->type,"Normal") == 0){
        return 1;
    }
    if(strcmp(equipeDresseur->type, "Feu") == 0){
        return 2;
    }
    if(strcmp(equipeDresseur->type, "Eau") == 0){
        return 3;
    }
    if(strcmp(equipeDresseur->type, "Plante") == 0){
        return 4;
    }
    if(strcmp(equipeDresseur->type, "Électrik") == 0){
        return 5;
    }
    if(strcmp(equipeDresseur->type, "Glace") == 0){
        return 6;
    }
    if(strcmp(equipeDresseur->type, "Combat") == 0){
        return 7;
    }
    if(strcmp(equipeDresseur->type, "Poison") == 0){
        return 8;
    }
    if(strcmp(equipeDresseur->type, "Sol") == 0){
        return 9;
    }
    if(strcmp(equipeDresseur->type, "Vol") == 0){
        return 10;
    }
    if(strcmp(equipeDresseur->type, "Psy") == 0){
        return 11;
    }
    if(strcmp(equipeDresseur->type, "Insecte") == 0){
        return 12;
    }
    if(strcmp(equipeDresseur->type, "Roche") == 0){
        return 13;
    }
    if(strcmp(equipeDresseur->type, "Spectre") == 0){
        return 14;
    }
    if(strcmp(equipeDresseur->type, "Dragon") == 0){
        return 15;
    }
    if(strcmp(equipeDresseur->type, "Tenèbres") == 0){
        return 16;
    }
    if(strcmp(equipeDresseur->type, "Acier") == 0){
        return 17;
    }
    if(strcmp(equipe2->type, "Normal") == 0){
        return 18;
    }
    if(strcmp(equipe2->type, "Feu") == 0){
        return 19;
    }
    if(strcmp(equipe2->type, "Eau") == 0){
        return 20;
    }
    if(strcmp(equipe2->type, "Plante") == 0){
        return 21;
    }
    if(strcmp(equipe2->type, "Électrik") == 0){
        return 22;
    }
    if(strcmp(equipe2->type, "Glace") == 0){
        return 23;
    }
    if(strcmp(equipe2->type, "Combat") == 0){
        return 24;
    }
    if(strcmp(equipe2->type, "Poison") == 0){
        return 25;
    }
    if(strcmp(equipe2->type, "Sol") == 0){
        return 26;
    }
    if(strcmp(equipe2->type, "Vol") == 0){
        return 27;
    }
    if(strcmp(equipe2->type, "Psy") == 0){
        return 28;
    }
    if(strcmp(equipe2->type, "Insecte") == 0){
        return 29;
    }
    if(strcmp(equipe2->type, "Roche") == 0){
        return 30;
    }
    if(strcmp(equipe2->type, "Spectre") == 0){
        return 31;
    }
    if(strcmp(equipe2->type, "Dragon") == 0){
        return 32;
    }
    if(strcmp(equipe2->type, "Ténèbres") == 0){
        return 33;
    }
    if(strcmp(equipe2->type, "Acier") == 0){
        return 34;
    }
}*/


//void initStat(equipe* equipeDresseur){
   // equipeDresseur->name = "Pikachu"; // associer var
   // equipeDresseur->attaque = 120;
   // equipeDresseur->defense = 120;
   // equipeDresseur->pv = 200;
   // equipeDresseur->vitesse = 120;
//}


// Changer statistiques pokemon

