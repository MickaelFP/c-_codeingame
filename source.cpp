#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

//Recherche dichotomique de l'entier ToSearch dans le tableau tab
int BinarySearch(vector<int> tab, int toSearch) {
    return -1;
}

//Recherche lineaire de l'entier ToSearch dans le tableau tab
int LinearSearch(vector<int> tab, int toSearch) {
    for (int i = 0; i < tab.size(); i++) {
        if (tab[i] == toSearch) {
            cout << "Trouve en " << i+1 << " tours" << endl;
            return i;
        }
    }
    return -1;
}

//Affiche les case du vector
void showTab(vector<int> tab) {
    cout << "tab[" << tab.size() << "] = {";
    for (int i = 0; i < tab.size(); i++) { 
        cout << tab[i];
        cout << ((i != tab.size() - 1) ? ", " : "}");
    }
    cout << endl;
}

void initializeTab(vector<int>& tab, mt19937 mersenne) {
    uniform_int_distribution<int> randomSize(10, 50);
    int NbElements = randomSize(mersenne);
    for (int i = 0; i < NbElements; i++) {
        tab.push_back(i);
    }
    shuffle(tab.begin(), tab.end(), mersenne);
}

int main() {
    vector<int> tab;

    //RANDOM ELEMENTS
    random_device rnd_device;
    mt19937 mersenne{ rnd_device() };

    initializeTab(tab, mersenne);
    showTab(tab);

    uniform_int_distribution<int> randomSearch(0, tab.size() - 1);
    int toSearch = randomSearch(mersenne);

    //LINEARSEARCH ICI
    cout << "LINEAR SEARCH : " << endl;
    cout<<"LinearSearch("<<toSearch<<") = "<< LinearSearch(tab, toSearch)<<endl;

    //BINARYSEARCH ICI
    cout << "BINARY SEARCH : " << endl;
    sort(tab.begin(), tab.end());
    showTab(tab);
    cout << "BinarySearch(" << toSearch << ") = " << BinarySearch(tab, toSearch)<<endl;
}
 
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
     elif (val > tab[mil]) {
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
