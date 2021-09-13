
//But : Déterminer le plus grand nombre d'une série de 10
//Auteur : Samuel Gascon
//date : 2021-09-13
#include <iostream>

using namespace std;
int main()
{
   //Déclaration des varaibles
   float nb;
   float max;
   //Demande à l'utilisateur d'entrer le premier nombre
   cout << "Entrer un nombre: ";
   cin >> nb;
   max = nb;
   //Demande à l'utilisateur d'entrer les autres nombres avec une boucle
   for (int compteur = 0; compteur < 9; compteur++)
   {
      cout << "Entrer un nombre: ";
      cin >> nb;
      if (max < nb)
      {
         max = nb;
      }
   }
   cout << "Le plus grand nombre est: " << max << endl;

   system("pause");
}
/*Plan de test
* serie                          résultas
* 1,2,3,4,5,6,7,8,9,10             10
* -6,1,2,3,4,5,6,7,8,9              9
* -15,-7.0.1.2.3.4.5.6,7            7
* -10,-9.-8.-7.-6.-5.-4.-3.-2.-1   -1
*/