
# Spiegazione degli Array Bidimensionali

Un array bidimensionale è una struttura dati che permette di memorizzare elementi in una griglia di righe e colonne. È simile a una tabella con celle, dove ogni cella può contenere un valore. Gli array bidimensionali sono utili per rappresentare matrici, tabelle di dati, immagini, e molto altro.

## Dichiarazione di un Array Bidimensionale

Per dichiarare un array bidimensionale in C++, si specifica il tipo di dati degli elementi, seguito dal nome dell'array e dalle dimensioni tra parentesi quadre. Ad esempio, per dichiarare un array 3x3 di interi:

```cpp
int righe=3;
int colonne=3;
int matrice[righe][colonne];
```

## Inizializzazione di un Array Bidimensionale

È possibile inizializzare un array bidimensionale al momento della dichiarazione. Ad esempio:

```cpp
int matrice[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

## Accesso agli Elementi

Gli elementi di un array bidimensionale si accedono specificando l'indice di riga e l'indice di colonna. Gli indici partono da 0. Ad esempio, per accedere all'elemento nella seconda riga e terza colonna:

```cpp
int valore = matrice[1][2];
```

## Modifica degli Elementi

È possibile modificare gli elementi di un array bidimensionale assegnando un nuovo valore a una specifica posizione. Ad esempio, per modificare l'elemento nella seconda riga e seconda colonna:

```cpp
matrice[1][1] = 10;
```

## Iterazione su un Array Bidimensionale

Per iterare su tutti gli elementi di un array bidimensionale, si utilizzano due cicli `for` annidati: uno per le righe e uno per le colonne. Ad esempio, per stampare tutti gli elementi:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrice[i][j] << " ";
    }
    cout << endl;
}
```
## Compilare il progetto e farlo partire

```
    g++ -o matrici matrici.cpp
```
```
    ./matrici
```

## Esempio Completo

Ecco un esempio completo che mostra come dichiarare, inizializzare, modificare e iterare su un array bidimensionale:

```cpp
#include <iostream>
using namespace std;

int main() 
{
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Elementi della matrice:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    matrice[1][1] = 10;
    cout << "Matrice dopo la modifica:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    int somma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somma += matrice[i][j];
        }
    }
    cout << "Somma degli elementi della matrice: " << somma << endl;

    return 0;
}
```

In questo esempio, abbiamo dichiarato una matrice 3x3, stampato i suoi elementi, modificato un elemento, e calcolato la somma di tutti gli elementi.