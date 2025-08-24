#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//declare le ficher resultat
void verifier_resultat(int somme_moi, int somme_banque, int *argent, int mise);

//génére un lancer aléatoire
int le_lance() {
    return (rand() % 6) + 1;
}

void regles(void); //declare le fichier regles pour les afficher apres
void afficher_des(int nouveau_lancer);
void afficher_des2(int lance_banque);
void afficher_des3(int lance_banque1);
void afficher_des4(int mon_lance);


int main(int argc, char *argv[]) {


    srand(time(NULL));  // pour la generation de nombre

    int lance_banque, lance_banque1;
    int mon_lance;
    int somme_moi = 0, somme_banque = 0;
    char confirmation; //sert a dire oui ou non pr continuer
    char rejouer;  //si il veurt rejoue ou pas
    int argent = 100; //Fait en sorte que l'argent debute a 100
    int mise = 0;

    regles();
    printf("Votre solde %d $\n" , argent);

    do { // initialise la boucle si le joureur veux rejoué
        somme_moi = 0;
        somme_banque = 0;

        printf("Quel est votre mise ? (mise max : %d ) :  ", argent);  //pour la mise
        scanf("%d", &mise);
        while (argent < mise) {
            printf("Vous n'avez pas assez d'argent pour cette mise\n");
            printf(" Veuillez saisir une nouvelle mise:  ");
            scanf("%d", &mise);
        }

        printf("Ok vous avez miser %d \n\n", mise);
        argent -= mise;  // Soustraire la mise de l'argent du joueur
        sleep(0.5);
        printf("C'est parti pour le jeu !\n");
        sleep(1);

        // Premier lancer pour le banquier
        lance_banque = le_lance();
        somme_banque = lance_banque;
        afficher_des2(lance_banque);
        printf("Le banquier a eu : %d\n", lance_banque);
        sleep(1);
        // Premier lancer pour le joueur
        mon_lance = le_lance();
        somme_moi = mon_lance;
        afficher_des4(mon_lance);
        printf("Vous avez eu : %d\n", mon_lance);
        sleep(1);

        // Boucle pour relancer jusqu'à ce que le joueur arrête ou dépasse 21
        while (1) { //initialise une boucle infinie

            printf("Vous avez un total de %d.\nVoulez-vous relancer (y/n) ? \n", somme_moi);
            scanf(" %c", &confirmation);

            if (confirmation == 'y') {
                int nouveau_lancer = le_lance();
                somme_moi += nouveau_lancer;
                printf("Vous avez eu un autre lancer : %d. Total : %d\n", nouveau_lancer, somme_moi);
                afficher_des(nouveau_lancer);

                if (somme_moi > 21) {
                    verifier_resultat(somme_moi, somme_banque, &argent, mise);
                    break;  // Sortir de la boucle si le joueur dépasse 21
                }
            } else {
                break;
            }
        }

        if (somme_moi <= 21) { // si le joueur n'a pas depasser 21 la banque

            printf("Le banquier joue maintenant...\n");
            while (somme_banque < 17) {  // elle joue jusqua ateindre o moin 17
                sleep(1);
                lance_banque1 = le_lance();
                somme_banque += lance_banque1;
                afficher_des3(lance_banque1);
                printf("La banque relance et a maintenant %d.\n", somme_banque);
            }

            //verif le resultat avec le fichier resultat.c
            verifier_resultat(somme_moi, somme_banque, &argent, mise);
        }

        //demande si il veut joue
        printf("Votre solde %d $" , argent);
        printf("Voulez-vous jouer une autre manche (y/n) ? \n");
        scanf(" %c", &rejouer);

    } while (rejouer == 'y');  //Si il veut rejoue il met y

    printf("Merci d'avoir joue ! Vous partez avec %d $.\n", argent); //si il veut pas jouer
    sleep(1.5);

    return 0;
}
