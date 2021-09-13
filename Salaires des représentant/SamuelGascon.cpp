//But : Dévlopper un programme qui calcule les salaires des employer et les affiches
//Auteur : Samuel Gascon
//Date : 2021-09-13

#include <iostream>

using namespace std;
int main()
{
   setlocale(LC_ALL, "");
   //Déclaration des variables
   int nbrepresentent;
   float commission;
   //Déclaration des constantes
   const int salairebase = 250;
   const float pourcentage = 7.5;
   //Demande à l'utilisateur combien de représentants il y a
   cout << "Combien de représentent? ";
   cin >> nbrepresentent;
   //Calcule pour le nombre de représentant;
   for (int i = 0; i < nbrepresentent; i++)
   {
      cout << "Le totale des ventes ";
      cin >> commission;
      //Si la commission est égales à -1 sa quit le programme
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