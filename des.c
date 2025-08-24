#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>




void afficher_des(int nouveau_lancer) {
    if (nouveau_lancer == 1 ) {
        printf("+-------+\n");
        printf("|       |\n");
        printf("|   o   |\n");
        printf("|       |\n");
        printf("+-------+\n");
    }
    else if (nouveau_lancer == 2) {
        printf("+-------+\n");
        printf("| o     |\n");
        printf("|       |\n");
        printf("|     o |\n");
        printf("+-------+\n");
    }
    else if (nouveau_lancer == 3) {
        printf("+-------+\n");
        printf("| o     |\n");
        printf("|   o   |\n");
        printf("|     o |\n");
        printf("+-------+\n");
    }
    else if (nouveau_lancer == 4) {
        printf("+-------+\n");
        printf("| o   o |\n");
        printf("|       |\n");
        printf("| o   o |\n");
        printf("+-------+\n");
    }
    else if (nouveau_lancer == 5) {
        printf("+-------+\n");
        printf("| o   o |\n");
        printf("|   o   |\n");
        printf("| o   o |\n");
        printf("+-------+\n");
    }
    else if (nouveau_lancer == 6) {
        printf("+-------+\n");
        printf("| o   o |\n");
        printf("| o   o |\n");
        printf("| o   o |\n");
        printf("+-------+\n");
    }

}

