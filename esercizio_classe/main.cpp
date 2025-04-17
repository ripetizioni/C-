#include <iostream>
#include "libreria.h"
using namespace std;

int main(){
    int numeroStudenti=0;
    cout<<"Quanti studenti ci sono?";
    cin>>numeroStudenti;
    numeroStudenti--;
    
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
            cout<<"Stato inserito!";
            presenze[j]=presenza;
        }else
        {
            cout<<"Errore! Hai inserito un carattere non consentito";
        } 
    }
}


