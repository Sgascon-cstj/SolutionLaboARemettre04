//But : completer un programme qui permet de deviner un nombre aléeatoire
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <time.h>
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "");
   //Déclaration des variables
   int nb;
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   //Déclaration des constantes
   const int essai = 3;
   const int max = 100;
   const int min = 0;
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
   //Demmande 5 nombre et les comparent
   
   cout << "Entrer un nombre: ";
   cin >> nb;
   int i = essai;
   if (nb <= max && nb >= min)
   {
      while (i > 0|| (i >= 0 && nb != random))
      {
         cout << "Il vous reste " << i + 1 << " essaie" << endl;
         cout << "Entrer un nombre: ";
         cin >> nb;
         if (nb > max && nb > min)
         {
            cout << "Le nombre n'est pas compris entre"<< min <<" et "<< max << endl;
            i++;
         }
         i--;
      }
   }
   else
   {
      cout << "Le nombre n'est pas compris entre" << min << " et " << max << endl;
   }


   //Affiche quel étais le nombre
   cout << "Le nombre est: " << random;
   system("pause");
}
/*Plan de test 
21       il vous reste: 4 essaie
0        il vous reste: 4 essaie
-6       Le nombre n'est pas compris entre 0 et 100
1045     Le nombre n'est pas compris entre 0 et 100
100      il vous reste: 4 essaie
0        il vous reste: 4 essaie
*/