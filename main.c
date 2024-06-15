#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <windows.h>
#include "CentreTexte.h"
#include "deroulement.h"
#include "aide.h"
#include "config.h"
#include "ecran.h"
void genererMots(char *mots[], int nombre)
{
    int i = 0;
    srand(time(NULL)); // initialisation de l'index qui genere le mots
    for(i = (nombre-1); i > 0; i--)
    {
        int t = rand() % (i + 1);
        char *temps = mots[i];
        mots[i] = mots[t];
        mots[t] = temps;
    }
}

    // la fonction qui enregistre les identite de joueur
void identite()
{
    char joueur1[20];
    char joueur2[20];
    // on demande le nom du premier joueur
    printf("Donner le nom du premier joueur : ");
    scanf("%s", joueur1);
     // on demande le nom du deuxieme joueur
    printf("Donner le nom du deuxieme joueur : ");
    scanf("%s", joueur2);

    printf("%s VS %s", joueur1, joueur2);

}
// la fonction qui permet au joueur de s'affonter


int main()
{
    FILE *fichier = fopen("fichier.txt", "a");
    int largeur_ecran = 80;
    int largeur_menbre = 80;
    char msg[] = "UDBL-DACTYLOGICIEL";
    couleurTexte(10);
    centreTexte(msg, largeur_ecran);
    ecrasseEcran();

    char membre[] = "MUKEBO ILUNGA GIFT\nMUSEKA KASUBA GABRIEL\nMUKAZO MAZANGA DON\nMUTWALE ILUNGA ADORA";
    centreTexte(membre, largeur_menbre);
    ecrasseEcran();


    int choixPrincipal = 0;
    // menu principal du jeu dactylogiciel
    printf("=====MENU PRINCIPAL=====\n\n");
    printf("1. Demarrage\n");
    printf("2. Configuration\n");
    printf("3. Aide\n");
    printf("0. Quitter\n");


    printf("Donner votre choix : ");
    scanf("%d", &choixPrincipal);
    switch(choixPrincipal)
    {
    case 1:
        {
            printf("- Demarrage...\n");
        }
        break;
    case 2:
        {
            printf("- Configuration\n");
        }
        break;
    case 3:
        {
            printf("- Aide\n");
        }
        break;
    default:
        {
            printf("Menu introuvable\n");
        }
        break;
    }
    if(choixPrincipal == 1)
    {
        jouerJeu();
    }
    else if(choixPrincipal == 2)
    {
        ajoutMot(fichier);
    }
    else if(choixPrincipal == 3)
    {
        Aide();
    }
    else
    {
        printf("choix incorrect\n");
        return 1;
    }



    return 0;
}
