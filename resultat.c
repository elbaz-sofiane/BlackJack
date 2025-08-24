#include <stdio.h>


void verifier_resultat(int somme_moi, int somme_banque, int *argent, int mise) {

    if (somme_moi > 21) { // verifie si le joueur depasse 21
        printf("Vous avez perdu, votre total depasse 21. Vous perdez votre mise.\n");
        printf("Vous avez maintenant %d $.\n", *argent);
    }

    else if (somme_banque > 21) {
        printf("La banque depasse 21, vous avez gagne !\n");
        *argent += mise * 2;  //gagne et recup la mise
        printf("Vous avez maintenant %d $.\n", *argent);
    }

    else if (somme_moi > somme_banque) {
        printf("Felicitations, vous avez gagne avec un score de %d contre %d.\n", somme_moi, somme_banque);
        *argent += mise * 2;
        printf("Vous avez maintenant %d $.\n", *argent);
    }
    else if (somme_moi = somme_banque) {
        printf("Vous avez fait egalite avec le banquier vous reprenez votre mise.");
        *argent += mise; //Il recupere sa mise
        printf("Vous avez maintenant %d $.\n", *argent);
    }

    else {
        printf("Désole, la banque a gagne avec %d contre %d.\n", somme_banque, somme_moi);
        printf("Vous avez maintenant %d $.\n", *argent);
    }
}
