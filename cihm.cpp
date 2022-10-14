#include "cihm.h"
#include <conio.h>
using namespace std;

CIhm::CIhm()
{
}

void CIhm::fonctionPrincipale()
{
    cout << "Bonjour Bts SNIR 2021" <<endl;
    int a, b, calcul ; /* déclaration de 3 variables de type entière */
    int u ;     /* déclaration de u comme variable de type entière */
    char v ;    /* déclaration de v comm variable de type caractère */
    cout << "BONJOUR\n\n"; /* utilisation d'une fonction-bibliothèque */
    a = 2.5 ; /* affectation */
    b = 13 ; /* affectation */
    u = 'x' ; /* affectation */
    v = -5 ;   /* affectation */
    calcul = (a + b)*2 ; /* affectation et opérateurs */
    cout << "Voici le resultat : "<< calcul << "\n\n" ; /* affiche le résultat de l'opération précédente*/
    cout << "1er affichage de u : " << u << endl ; /* montre la première valeur de u */
    cout << "2ieme affichage de u : " << (char)u << "\n\n" ; /* montre la valeur finale de u */
    cout << "1er affichage de v: "<< v << endl ; /* montre la valeur finale de v */
    cout << "2eme affichage de v: "<< (int)v << "\n\n"; /* montre la valeur finale de v */
    cout << "Pour continuer frapper une touche..." << endl <<endl ; /* fin du programme, attente d'interaction par l'utilisateur */
    getch( ); /* fonction saisie d’un caractère clavier */
}

void CIhm::fonctionExercice2()
{
    char c;
    c = 66; /* c est le caractere alphanumerique B */
    cout << (char)c << endl ;
    cout << (int)c << endl ;
    cout << oct << (int)c << endl;
    cout << hex << (int)c << endl;
    cout << dec << (int)c << endl;
    cout << "Pour continuer frapper une touche..." << endl << endl;
    getch(); /* Attente d'une saisie clavier */
}
