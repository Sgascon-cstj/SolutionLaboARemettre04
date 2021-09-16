//But : completer un programme qui permet de deviner un nombre aléeatoire
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <time.h>
#include<iostream>
using namespace std;
void map()
{
   char maps[10][11] = {
      '#','-','#','-','#','-','#','-','#','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','-','-','-','-','-','-','-','-','#',
      '#','-','#','-','#','-','#','-','#','-','#',


   };
   for (int i = 0; i < 10; i++)
   {
      for (int x = 0; x < 11; x++)
      {
         cout << maps[i][x];
      }
      cout << endl;
   }

}
void Line(int w)
{
   for (int i = 0; i < w; i++)
   {
      cout << "-";
   }
   cout << endl;
}
int main()
{
   setlocale(LC_ALL, "");
   //Déclaration des variables
   int nb;
   int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   //Déclaration des constantes
   const int essai = 5;//Le nombre d'essaie réel est la valeur de la constante plus 2
   const int MAX = 10;
   const int MIN = 1;
   srand(time(0)); // pour activer l’aléatoire dans le programme
   random = rand() % ((MAX - MIN)+ 1) + MIN; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans random
   //Demmande 5 nombre et les comparent au nombre aléatoire pour savoir si c'est le même nombre que le nombre aléatoire
   map();
   cout << random<< endl;
   cout << "Entrer un nombre: ";
   cin >> nb;
   Line(35);
   int i = essai;
  
   //Regarde si le premier nombre est entre le maximum et le minimum
   while (!(nb >= MIN && nb <= MAX))
   {
      cout << "Erreur: pas entre " << MIN << " et " << MAX << endl;
      cout << "Entrer un nombre: ";
      cin >> nb;
      Line(35);
   }

   //Tant que le nombre n'est pas égale à random et qu'il lui reste des chances
   i--;
   
   
   while ((nb != random && i > 0))
   {
     
      cout << "Il reste " << i << " essaies " << endl;
      cout << "Entrer un nombre: ";
      cin >> nb;
     
      while (!(nb >= MIN && nb <= MAX))
      {
         cout << "Erreur: pas entre " << MIN << " et " << MAX << endl;
         cout << "Entrer un nombre: ";
         cin >> nb;
         Line(35);
      }
      i--;
      Line(35);

   }
   if (nb == random)
   {
      cout << "Ta eu de la chance!" << endl;
   }
   else
   {
      cout << "Le nombre est: " << random << endl;
   }
   //Affiche quel étais le nombre
   
   system("pause");
   return 0;
}

/*Plan de test 
21       il vous reste: 4 essaie
0        il vous reste: 4 essaie
-6       Le nombre n'est pas compris entre 0 et 100
1045     Le nombre n'est pas compris entre 0 et 100
100      il vous reste: 4 essaie
0        il vous reste: 4 essaie
*/