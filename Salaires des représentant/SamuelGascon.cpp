//But : D�vlopper un programme qui calcule les salaires des employer et les affiches
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <iostream>

using namespace std;
int main()
{
   setlocale(LC_ALL, "");
   //D�claration des variables
   int nbrepresentent;
   float commission;
   //D�claration des constantes
   const int salairebase = 250;
   const float pourcentage = 7.5;
   //Demande � l'utilisateur combien de repr�sentants il y a
   cout << "Combien de repr�sentent? ";
   cin >> nbrepresentent;
   //Calcule pour le nombre de repr�sentant;
   for (int i = 0; i < nbrepresentent; i++)
   {
      cout << "Le totale des ventes ";
      cin >> commission;
      //Si la commission est �gales � -1 sa quit le programme
      if (commission == -1)
      {
         exit(1);
      }
      //Calcule salire totale et l'affiche
      cout << "Son salaire est: " << (((commission / 100) * pourcentage) + salairebase) << endl;

   }


   system("pause");
}
/*
   commission     salaire
   5000              625
   0                 250
   40                253
   450.2             283.788
*/