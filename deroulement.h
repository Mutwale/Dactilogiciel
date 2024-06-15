void jouerJeu()
{

    int nombreMots = 0;

    printf("entre le nombre de mots a saisir : ");
    // demande a l'utilisateur de donner le nombre de que le deux deux joueur vont saisir
    scanf("%d", &nombreMots);
    clock_t debut, fin;
    //initialisation du temps du premier joueur
    double tempsJoueur1 = 0;
     //initialisation du temps du deuxieme joueur
    double tempsJoueur2 = 0;
    int i = 0;

    char *mots[] = {"langage", "niveau", "logiciel", "clavier", "programmation", "piratage", "reseau", "design", "informatique"};

    genererMots(mots, 9);
    debut = clock();
    // debut du temps de saisi
    for(i = 0; i < nombreMots; i++)
    {
        char motAsaisir[50];
        // le joueur1 saisi le mot afficher
        printf("joueur 1 saisi le mot suivant : %s\n", mots[i]);
        scanf("%s", motAsaisir);

        while(strcmp(motAsaisir, mots[i]) != 0)
        {
            // tant que le mots ne pas correcte le joueur recommence
            printf("ce pas le bon mot. veillee reessayez : ");
            scanf("%s", motAsaisir);
        }
    }
    fin = clock();
    tempsJoueur1 = ((double)(fin - debut)) / CLOCKS_PER_SEC;
    // on affiche le temps du saisi du premier joueur
    printf("Temps de saisi pour le premier joueur : %f secondes\n", tempsJoueur1);

    debut = clock();
    for(i = 0; i < nombreMots; i++)
    {
        char motAsaisi[50];
        printf("joueur 2 saisi le mot suivant : %s\n", mots[i]);
        scanf("%s", motAsaisi);
        while(strcmp(motAsaisi, mots[i]) != 0)
        {
            printf("ce ne pas le bon mot. veillee reessayer : ");
            scanf("%s", motAsaisi);
        }
    }
    fin = clock();
    tempsJoueur2 = ((double)(fin - debut)) / CLOCKS_PER_SEC;


    printf("Temps de saisi pour le deuxieme joueur : %f secondes\n", tempsJoueur2);

    // comparaisont du plus rapide au clavier
    if(tempsJoueur1 > tempsJoueur2)
    {
        printf("joueur 2 est plus rapide au clavier");
    }
    else if(tempsJoueur1 < tempsJoueur2)
    {
        printf("joueur 1 est plus rapide au clavier");
    }
    else
    {
        printf("les deux joueur ont la meme vitesse au clavier");
    }

}
