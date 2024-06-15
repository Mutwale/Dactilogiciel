void Aide()
{
    // variable qui nous permet de manupiler la partie aide
    printf("===AIDE===\n\n");
    printf("1. Description\n");
    printf("2. version du jeu\n");
    printf("3. cocepteurs\n");
    printf("4. Date de conception\n");
    printf("5. Autre informations sur l'aplication\n\n");
    // demande d'un nombre pour permettre la selection de l'info qu'on veut avoir
    printf("Choisir une option a propos de l'application : ");

     int choix = 0;

        scanf("%d", &choix);
        switch(choix)
        {
        case 1:
            {
                printf("===La description de l'application===\n");
            }
            break;
        case 2:
            {
                printf("===La version du jeu===\n");
                printf("1.1");
            }
            break;
        case 3:
            {
                printf("===Les consepteurs===\n");
                printf("MUKEBO ILUNGA GIFT\nMUKAZO MAZANGA DON\n GABRIEL\n MUTWALE ILUNGA ADORA");
            }
            break;
        case 4:
            {
                printf("===La date de conception===\n");
                printf("samedi le 15/juin/ 2024");
            }
            break;
        case 5:
            {
                printf("===Autres informations sur l'application\n===");
                printf("Tous droits reserves");

            }
            break;
        default:
            {
                printf("Information introuvable\n");
            }
            break;
        }
}



