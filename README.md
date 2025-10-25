
# TP 4 : Constructeurs et Destructeurs en C++

## Exercice 1 : Suivi des Livres dans une Bibliothèque

### Objectif
Concevoir une classe `Livre` qui utilise un attribut statique pour compter le nombre de livres créés. Chaque objet `Livre` peut afficher ses informations, et la classe peut afficher le nombre total de livres.

### Classes et Méthodes
- **Classe `Livre`**  
  - Attributs :
    - `titre` (string)  
    - `auteur` (string)  
    - `annee` (int)  
    - `nbLivres` (statique, int) : compteur total
  - Constructeur : initialise les attributs et incrémente le compteur `nbLivres`  
  - Méthodes :
    - `afficher()` : affiche les informations du livre  
    - `afficherTotal()` (statique) : affiche le nombre total de livres créés  

 ## Exemple d’exécution

```
Titre : 1984, Auteur : George Orwell, Année : 1949
Titre : Le Petit Prince, Auteur : Antoine de Saint-Exupéry, Année : 1943
Titre : L'Étranger, Auteur : Albert Camus, Année : 1942
Nombre total de livres : 3

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="675" height="87" alt="execution_ex1" src="https://github.com/user-attachments/assets/f04c40c5-19c5-4987-a880-72c607e08d25" />

## Exercice 2 : Gestion des Étudiants et de l’Université

## Objectif
Créer deux classes associées — `Etudiant` et `Universite` — pour illustrer l'utilisation d'attributs statiques permettant de compter les étudiants dans une université.  

### Concepts clés
- Attributs **statiques** pour suivre des informations partagées entre toutes les instances (`nbEtudiants`).  
- Méthodes **statiques** pour accéder à ces informations sans créer d’objet.  
- Association entre classes via un **pointeur** (`Etudiant` → `Universite`).  

---

## Classes

### Classe `Universite`
- **Attributs** :
  - `nom` : nom de l’université (string)  
- **Méthodes** :
  - `afficherNom()` : affiche le nom de l’université  

### Classe `Etudiant`
- **Attributs** :
  - `nom` : nom de l’étudiant (string)  
  - `age` : âge de l’étudiant (int)  
  - `universite` : pointeur vers l’université de l’étudiant  
  - `nbEtudiants` : compteur statique d’étudiants créés (int)  
- **Constructeur** :
  - Initialise les attributs et incrémente `nbEtudiants`  
- **Méthodes** :
  - `afficher()` : affiche les informations de l’étudiant et le nom de son université  
  - `afficherTotal()` (statique) : affiche le nombre total d’étudiants  

---
 ## Exemple d’exécution

```
Nom : Amine, Age : 20, Université : Université de Casablanca
Nom : Sara, Age : 21, Université : Université de Casablanca
Nombre total d'étudiants : 2

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="434" height="73" alt="execution_ex2" src="https://github.com/user-attachments/assets/3fd5e00d-829a-4b62-b183-1ee4b2660cd4" />
