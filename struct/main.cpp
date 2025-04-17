#include <iostream>
#include "classe.h"
using namespace std;

int main() {
    // Dichiarazione di un array di strutture Studente di dimensione 50
    struct Classe scuola[20];
    int n_classi=0;
    // Variabile per memorizzare la scelta dell'utente
    char scelta;
    do
    {
        // Menu di scelta per l'utente
        cout << "\n'c' per aggiungere una classe"
                "\n'a' per aggiungere uno studente,"
                "\n'v' per aggiungere un voto a uno studente,"
                "\n's' per stampare la classe,"
                "\n't' per sapere lo studente con la media migliore,"
                "\n'm' per la media di una classe,"
                "\n'b' per la classe migliore,"
                "\n'q' per uscire\n";
        cin>>scelta;
        switch (scelta)
        {
            case 'c':
            {
                cout<<"\nDimmi il nome della classe: ";
                cin>>scuola[n_classi].nome_classe;
                n_classi++;
                cout<<"\nClasse aggiunta, sono presenti: "<<scuola[n_classi].n_studenti<<" studenti";
                break;
            }
            case 'a':
            {
                int n;
                //stampa classi
                for(int i=0;i<n_classi;i++)
                {
                    cout<<"\n"<<i<<") "<<scuola[i].nome_classe;
                }
                // Aggiunta di un nuovo studente
                cout<<"\nIn che classe lo vuoi aggiungere?";
                cin>>n;
                cout<<"\n Inserisci Nome: ";
                cin>>scuola[n].studenti[scuola[n].n_studenti].nome;
                cout<<"\n Inserisci Congnome: ";
                cin>>scuola[n].studenti[scuola[n].n_studenti].cognome;
                cout<<"\nAggiunto studente ";
                // Stampa dei dettagli dello studente appena aggiunto
                stampaStudente(scuola[n].studenti[scuola[n].n_studenti]);
                // Incremento della dimensione logica
                scuola[n].n_studenti++;
                break;
            }
            case 'v':
            {
                int n;
                //stampa classi
                for(int i=0;i<n_classi;i++)
                {
                    cout<<"\n"<<i<<") "<<scuola[i].nome_classe;
                }
                // Aggiunta di un nuovo studente
                cout<<"\nA quale classe vuoi aggiungere il voto?";
                cin>>n;
                
                // Aggiunta di un voto a uno studente esistente
                int studente;
                float voto;
                // Stampa della lista degli studenti
                stampaClasse(scuola[n].studenti,scuola[n].n_studenti);
                cout<<"\n A quale studente vuoi aggiugnere il voto: ";
                cin>>studente;
                cout<<"\nInserisci voto: ";
                cin>>voto;
                // Aggiunta del voto allo studente selezionato
                scuola[n].studenti[studente].voti[scuola[n].studenti[studente].dimensioneLogica]=voto;
                scuola[n].studenti[studente].dimensioneLogica++;                
                cout<<"\nVoto aggiunto ";
                break;
            }
            case 's':
            {
                int n;
                //stampa classi
                for(int i=0;i<n_classi;i++)
                {
                    cout<<"\n"<<i<<") "<<scuola[i].nome_classe;
                }
                // Aggiunta di un nuovo studente
                cout<<"\nDi quale classe vuoi la stampa?";
                cin>>n;
                // Stampa della lista completa degli studenti
                stampaClasse(scuola[n].studenti,scuola[n].n_studenti);
                break;
            }
            case 't':
            {
                int n;
                //stampa classi
                for(int i=0;i<n_classi;i++)
                {
                    cout<<"\n"<<i<<") "<<scuola[i].nome_classe;
                }
                // Aggiunta di un nuovo studente
                cout<<"\nDi quale classe vuoi lo studente migliore?";
                cin>>n;
                // Stampa dello studente con la media dei voti migliore
                cout<<"\nLo studente con la media migliore è: ";
                stampaStudente(miglioreStudente(scuola[n].studenti,scuola[n].n_studenti));
                break;
            }
            case 'm':
            {
                int n;
                //stampa classi
                for(int i=0;i<n_classi;i++)
                {
                    cout<<"\n"<<i<<") "<<scuola[i].nome_classe;
                }
                // Aggiunta di un nuovo studente
                cout<<"\nDi quale classe vuoi la media?";
                cin>>n;
                cout<<"\nLa media della classe è: "<< mediaClasse(scuola[n]);
                break;
            }
            case 'b':
            {
                cout<<"\nLa classe migliore e': "<<classeMigliore(scuola,n_classi);
                break;
            }
            case 'q':
            {
                // Uscita dal programma
                cout<<"\n Uscita del programma";
                break;
            }
            default:
            {
                // Gestione della scelta non valida
                cout<<"\nScelta non valida";
                break;
            }
        }
    }while (scelta!='q'); // Ripeti il ciclo finché l'utente non sceglie di uscire ('q')
    return 0;
}