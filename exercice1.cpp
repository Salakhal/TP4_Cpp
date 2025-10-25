#include <iostream>
#include <string>
using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int annee;
    static int nbLivres; // attribut statique pour compter le nombre de livres

public:
    // Constructeur
    Livre(string t, string a, int an) {
        titre = t;
        auteur = a;
        annee = an;
        nbLivres++; // incrémentation du compteur à chaque création
    }

    // Méthode pour afficher les informations d'un livre
    void afficher() {
        cout << "Titre : " << titre << ", Auteur : " << auteur << ", Année : " << annee << endl;
    }

    // Méthode statique pour afficher le nombre total de livres
    static void afficherTotal() {
        cout << "Nombre total de livres : " << nbLivres << endl;
    }
};

// Initialisation de l'attribut statique en dehors de la classe
int Livre::nbLivres = 0;

int main() {
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
    Livre l3("L'Étranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    Livre::afficherTotal(); // Appel de la méthode statique sans instanciation

    return 0;
}
