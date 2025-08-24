
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void clear_screen() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}

void regles()
{

    printf(
"      _      _               _        _               _     \n"
"     | |    | |             | |      (_)             | |    \n"
"     | |__  | |  __ _   ___ | | __    _   __ _   ___ | | __ \n"
"     | '_ | | | / _` | / __|| |/ /   | | / _` | / __|| |/ / \n"
"     | |_) || || (_| || (__ |   <    | || (_| || (__ |   <  \n"
"     |_.__/ |_| |__,_| |___||_||_|   | | |__,_| |___||_||_| \n"
"                                    _| |                    \n"
"                                   |__/                     \n");

sleep(0.5);

    printf(""
        " _________________________________________________________________\n"
        "|                            REGLES                               |\n"
        "|                  ~ Vous commencez avec 100$ ~                   |\n"
        "| ~ Si vous depassez 21, vous perdez automatiquement votre mise ~ |\n"
        "|       ~ Si la banque depasse 21 vous doubler votre mise ~       |\n"
        "|~ une fois que la banque attein +/= 17, il ne peut plus lancer ~ |\n"
        "|                ~ Le plus proche de 21 gagne. ~                  |\n"
        " ----------------------------------------------------------------- \n\n");

}




