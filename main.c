#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Jeu(int NbJ,int NbE);

void menu_jeu_Halma()
{
    char lettre_selection; /// lettre qui définie le mode de jeu
    int nbr_joueur; /// utilisé pour le cas e du menu

    printf("a) partie a 2 joueurs\n\n");
    printf("b) partie a 4 joueurs\n\n");
    printf("c) partie 2 joueurs contre l'ordinateur\n\n");
    printf("d) partie ordinateur contre ordinateur\n\n");
    printf("e) partie de 0 a 3 humain contre une a 4 machines\n\n");
    printf("appuyer sur la touche clavier du monde de jeu que vous souhaitez:");



    if(kbhit())
    {
        lettre_selection=getch();

        while(lettre_selection!='a' || lettre_selection!='b' || lettre_selection!='c' || lettre_selection!='d' || lettre_selection!='e')
        {
            printf("choix du mode de jeux invalide recommencez:");

            if (kbhit())
            {
                lettre_selection=getch();
            }

        }

            switch(lettre_selection)
             {
                case 'a':
                     printf("Jeu(2, 0)");
                    break;

                case 'b':
                     printf("Jeu(4, 0)");
                    break;

                case 'c':
                     printf("Jeu(2, 2)");
                    break;

                case 'd':
                     printf("Jeu(0, 2)");
                    break;

                case 'e':

                    printf("enrer le nombre de joueur que vous souhaitez:");
                    scanf("%d",&nbr_joueur);

                    while(nbr_joueur>3)
                    {

                     printf("le nombre de joueur entré est incorect, resaisissez le nombre de joueur:");
                        scanf("%d",&nbr_joueur);
                    }

                    printf("Jeu(nbr_joueur, 4-nbr_joueur)");

                    break;
             }

    }

}



int main()
{
    menu_jeu_Halma();

    return 0;
}
