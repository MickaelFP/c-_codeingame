//l'exercice du jours est à la fin

#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;

//Recherche dichotomique de l'entier ToSearch dans le tableau tab
int BinarySearch(vector<int> tab, int toSearch) {
    //Divise tableau en 2
    //la case du milieu == tosearch ?
        //return index
    //taille(la case du milieu) == 1 ?
        // return -1;
    //la case du milieu > toSearch ?
        // binarySearch(tab inferieur, toSearch)
    //la case du milieu < toSearch ?
        // binarySearch(tab superieur, toSearch)
    return -1;
}

//Recherche lineaire de l'entier ToSearch dans le tableau tab
int LinearSearch(vector<int> tab, int toSearch) {
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == toSearch) {
            return i;
        }
    }
    return -1;
}

//Affiche les case du vector
void showTab(vector<int> tab) {
    cout << "tab[" << tab.size() << "] = {";
    for (int i = 0; i < tab.size(); i++) { 
        if (i != tab.size() - 1) {
            cout << tab[i] << ", ";
        }
        else {
            cout << tab[i] << "}" << endl;
        }
    }
}

int main() {
    srand(time(NULL));
    vector<int> tab;
    int NbElements = 10;
    for (int i = 0; i < NbElements; i++) {
        int random = rand() % NbElements;
        for (int j = 0; j < i; j++) {
            if (tab[j] == random) {
                random = rand() % 10;
                j = -1;
            }
        }
        tab.push_back(random);
    }
    showTab(tab);
    sort(tab.begin(), tab.end());
    showTab(tab);

    //BINARYSEARCH ICI
    int toSearch = rand()%NbElements;
    cout << "Recherche de " << toSearch << endl;
    BinarySearch(tab, toSearch);
}

researchDichotomique Iterative {
    //déclarations
 début, fin, val, mil, N : Entiers
 t : Tableau [0..N] d'entiers classé
 trouvé : Booléen
 
 /*
 int debut = 0
 int fin = N;
 int val;
 int mil;
 int N;
 int tab[i];
 bool trouve;
 trouve = false;
 cin >> val;
 while (trouve != true; debut <= fin) { 
     mil = partie_entière((debut + fin)/2);
     if (tab[mil] == val) {
         trouve = true;
     }
     elif if (val > tab[mil]) {
         if (val > tab[mil]) {
             debut = mil + 1;
         }
         else {
             fin = mil - 1;
         }
     }
 }
 if (trouve == true) {
     cout << "la valeur" << val << "est au rang" << mil << endl;
 }
 else {
     cout << "la valeur" << val << "n'est pas dans le tableau" << endl;
 */

//initialisation
 début ← 0 
 fin ← N
 trouvé ← faux
 Saisir val

//Boucle de recherche
 // La condition début inférieur ou égal à fin permet d'éviter de faire
 // une boucle infinie si 'val' n'existe pas dans le tableau.
  Tant que trouvé != vrai et début <= fin:
      mil ← partie_entière((début + fin)/2)
      si t[mil] == val:
         trouvé ← vrai
      sinon:
         si val > t[mil]:
            début ← mil+1
         sinon:
            fin ← mil-1
 //Affichage du résultat
  Si trouvé == vrai:
      Afficher "La valeur ", val , " est au rang ", mil
  Sinon:
      Afficher "La valeur ", val , " n'est pas dans le tableau"
}
