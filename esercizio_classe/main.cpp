#include <iostream>
#include "libreria.h"
using namespace std;

int main(){
    int numeroStudenti=0;
    cout<<"Quanti studenti ci sono?";
    cin>>numeroStudenti;
    numeroStudenti;
    
    string nomeStudenti[numeroStudenti];
    char presenze[numeroStudenti];

    for(int i=0; i<numeroStudenti;i++){
        cout<<"inserisci il nome dello studente: ";
        cin>>nomeStudenti[i];
    }
    
    int j=0;
    while(j<numeroStudenti){
        char presenza;
        cout<<"studente "<<nomeStudenti[j]<<" - Inserisci P se lo studente e presente o A se lo studente e assente: ";
        cin>>presenza;
        if(presenza == 'P'|| presenza =='A'){
            cout<<"Stato inserito!\n";
            presenze[j]=presenza;
            j++;
        }else
        {
            cout<<"Errore! Hai inserito un carattere non consentito";
        } 
        
    }
    char stampa;
    do
    {
        cout<<"\n premi 'e' per stampare elenco completo studenti: ";
        cout<<"\n premi 'p' per stampare elenco studenti presenti: ";
        cout<<"\n premi 'a' per stampare elenco studenti assenti: ";
        cout<<"\n premi 'q' per uscire dal programma\n";
        cin>>stampa;
        switch (stampa)
        {
            case 'e':
                elencoCompleto( numeroStudenti, nomeStudenti);
                break;
            
            case 'p':
                presenti_assenti(numeroStudenti, presenze, nomeStudenti, 0);
                break;
            
            case 'a':
                presenti_assenti(numeroStudenti, presenze, nomeStudenti, 1);
                break;
            
            case 'q':
                cout<<"\n Uscita del programma";
                break;
            
            default:
                cout<<"Errore! Hai inserito un carattere non consentito";
                break;
            
        }
    } while (stampa != 'q');
    return 0;
    
    
}


