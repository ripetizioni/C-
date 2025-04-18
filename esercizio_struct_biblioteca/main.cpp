#include <iostream>
#include "libro.h"
using namespace std;

int main(){
    int scelta;
    inizializzaLibreria();
    riempiLibreria();
    do
    {
        cout<<"\n----Menù----\n";
        cout<<"1. Visualizza tutti i libri presenti\n";
        cout<<"2. Cerca libro per titolo \n";
        cout<<"3. Cerca libro per autore\n";
        cout<<"4. Registra un prestito\n";
        cout<<"5. Esci dal programma\n";
        cout<<"Scelta: ";
        cin>>scelta;
        switch (scelta)
        {
        case 1:
            visualizzaLibri();
            break;
        case 2:
            cercaTitolo();
        break;
        case 3:
            cercaAutore();
        break;
        case 4:
            prestito();
        break;
        case 5:
            cout<<"Uscita dal programma.\n";
        break;
        default: cout<<"Errore!Scelta non valida. Riprova.\n";
        break;
        }
    } while (scelta != 5);
    return 0;
}