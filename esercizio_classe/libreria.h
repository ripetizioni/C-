#include <iostream>
using namespace std;

void elencoCompleto(int numeroStudenti,string nomeStudenti[]){
    
    for (int i = 0; i < numeroStudenti; i++)
    {
        cout<<"\nStudente "<< nomeStudenti[i];
    }
    
}
//se assenze=1 allora stampa solo gli studenti assenti
//se assenze=0 allora stampa solo gli studenti presenti
void presenti_assenti(int numeroStudenti, char presenze[], string nomeStudenti[], int assenze){
    
    //assente=1
    if(assenze==1)
    {
        for(int i = 0; i < numeroStudenti; i++ )
        {
            if(presenze[i] == 'A')
            {
                cout<<"studente "<< nomeStudenti[i]<<"\n";
            }
        }
    }else if(assenze==0){
        for(int i = 0; i < numeroStudenti; i++ )
        {
            if(presenze[i] == 'P')
            {
            cout<<"studente "<< nomeStudenti[i]<<"\n";
            }
        }
    }else
    {
        cout<<"Errore! Valore inserito non valido!";
    }
    
}

