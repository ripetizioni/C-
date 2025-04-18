#include <iostream>
using namespace std;
int dimensione_fisica=0;
int dimensione_logica=0;
struct Libro biblioteca[];

struct Libro
{
    string titolo;
    string autore;
    int anno;
    bool disponibile;
};

void inizializzaLibreria()
{
    cout<<"Quanti libri sono presenti i bibblioteca?\n";
    cin>>dimensione_fisica;
    struct Libro biblioteca[dimensione_fisica];
}

void inserisciLibro()
{
    cout<<"\n Inserisci titolo libro: ";
    cin>>biblioteca[dimensione_logica].titolo;
    cout<<"\n Inserisci nome autore: ";
    cin>>biblioteca[dimensione_logica].autore;
    cout<<"\n Inserisci anno di publicazione: ";
    cin>>biblioteca[dimensione_logica].anno;
    biblioteca[dimensione_logica].disponibile=true;
    dimensione_logica++;
}

void riempiLibreria()
{
    for(int i =0; i < dimensione_fisica; i++)
    {
        inserisciLibro();
    }
}

void stampaLibro(int id)
{
    cout<< "\n Libro: "<<biblioteca[id].titolo<<" || "<<biblioteca[id].autore<<" || "<<biblioteca[id].anno<<" || "<<biblioteca[id].disponibile;
}

void visualizzaLibri()
{
    for(int i=0; i<dimensione_fisica; i++)
    {
        stampaLibro(i);
    }
}

void cercaTitolo()
{
    int i =0;
    string copertina;
    cout<<"\n Che libro stai cercando? ";
    cin>>copertina;
    while ( i < dimensione_fisica)
    {
        if(biblioteca[dimensione_fisica].titolo==copertina)
        {
            cout<<"\n Ecco il libro che hai richiesto. "<<biblioteca[dimensione_fisica].titolo;
        }
    }
    
}

void cercaAutore()
{
    int i =0;
    string nome;
    cout<<"\n Che autore stai cercando? ";
    cin>>nome;
    while ( i < dimensione_fisica)
    {
        if(biblioteca[dimensione_fisica].autore==nome)
        {
            cout<<"\n Ecco l'autore che hai richeisto "<<biblioteca[dimensione_fisica].autore;
        }
    }
    
}




