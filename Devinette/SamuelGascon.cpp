//But : completer un programme qui permet de deviner un nombre al�eatoire
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <time.h>
#include<iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL, "");
   //D�claration des variables
   int nb;
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random
   //Demmande 5 nombre et les comparent
   for (int i = 0; i < 5; i++)
   {
      //Demande d'entrer un nombre
      cout << "Entrer un nombre entre 0 et 100: ";
      cin >> nb;
      //D�termine si le nombre est entre 0 et 100
      if (nb <= 100 && nb >= 0)
      {
         //D�termine si c'est le bon nombre en le comparant avec la variable random
         if (nb == random)
         {
            cout << "Vous avez trouver le bon nombre :-)"<< endl;
            system("pause");
            exit(1);
         }
         else
         {
            //Affiche le nombre d'essaie restant
            cout << "Ce n'est pas le bon nombre, il vous reste: " << 4 - i << " essaie" << endl;
         }
      }
      else
      {
         //Si le nombre n'est pas compris entre 0 et 100 on l'affiche et on ajoute un tour de plus 
         cout << "Le nombre n'est pas compris entre 0 et 100"<< endl;
         i--;
      }
   }
   //Affiche quel �tais le nombre
   cout << "Le nombre est: " << random;
   system("pause");
}
/*Plan de test 
21       Ce n'est pas le bon nombre, il vous reste: 4 essaie
0        Ce n'est pas le bon nombre, il vous reste: 4 essaie
-6       Le nombre n'est pas compris entre 0 et 100
1045     Le nombre n'est pas compris entre 0 et 100
100      Ce n'est pas le bon nombre, il vous reste: 4 essaie
0        Ce n'est pas le bon nombre, il vous reste: 4 essaie
*/