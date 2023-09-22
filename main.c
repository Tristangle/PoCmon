#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroPokemon = 0;
    char* nom = malloc(sizeof (char) * 100);
    int attaque;
    int defense;
    int pv;
    int vitesse;
    char * type = malloc(sizeof (char) * 100);

    FILE *f = fopen("/Users/Tristan/Desktop/PoCmon/poCmon.csv", "r+"); // récupérer la liste
    if(f == NULL){
        printf("Erreur");
    }
    char check = (char)fgetc(f);

    // LIRE LA LIGNE
    for(int i = 0; i < 11; i++){
        fscanf(f, "%s;%d;%d;%d;%d;%s\n", nom, &attaque, &defense, &pv, &vitesse, type);
        printf("%s\n", nom);
        numeroPokemon ++;
    }
    fclose(f);
    return 0;
}
