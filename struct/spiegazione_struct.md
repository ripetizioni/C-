# Le Struct in C++

## Cosa sono le Struct?
Le struct (o strutture) in C++ sono un modo per raggruppare variabili sotto un unico nome. Ogni variabile all'interno di una struct è chiamata membro della struct. Le struct sono utili per organizzare dati correlati e possono contenere variabili di diversi tipi.

## Definizione di una Struct
Per definire una struct, si utilizza la parola chiave `struct` seguita dal nome della struct e da un blocco di codice che racchiude i membri della struct. Ecco un esempio di una struct che rappresenta uno studente:

```cpp
struct Studente {
    string nome;
    string cognome;
    int classe;
};
```

## Accesso ai Membri della Struct
Per accedere ai membri di una struct, si utilizza l'operatore punto (`.`). Ecco un esempio:

```cpp
Studente s;
s.nome = "Mario";
s.cognome = "Rossi";
s.classe = 3;
```

## Esempio Completo
Ecco un esempio completo che include la definizione di una struct `Studente` e funzioni per stampare le informazioni di uno studente e di un array di studenti:

```cpp
#include <iostream>
#include <string>

using namespace std;

struct Studente {
    string nome;
    string cognome;
    int classe;
};

void stampaStudente(const Studente s) {
    cout << "Nome: " << s.nome << ", Cognome: " << s.cognome << ", Classe: " << s.classe << endl;
}

void stampaTuttiStudenti(const Studente studenti[], int dimensione) {
    for (int i = 0; i < dimensione; ++i) {
        stampaStudente(studenti[i]);
    }
}

int main() {
    Studente studenti[2] = {{"Mario", "Rossi", 3}, {"Luigi", "Verdi", 4}};
    stampaTuttiStudenti(studenti, 2);
    return 0;
}
```
