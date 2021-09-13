//But : completer un programme qui permet de deviner un nombre aléeatoire
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <time.h>
using namespace std;
int main()
{
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
}