//But : completer un programme qui permet de deviner un nombre al�eatoire
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <time.h>
using namespace std;
int main()
{
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random
}