#include <iostream>
#include "libreria.h"
using namespace std;

int main() 
{
    char x;
    do
    {
        int grandezza_fisica;
        cout<<"Quanti numeri: ";
        cin>>grandezza_fisica;
        while (grandezza_fisica <= 0)
        {
            cout<<"\nIl numero inserito non e' corretto, inserisci altro numero: ";
            cin>>grandezza_fisica;
        }

        float numeri[grandezza_fisica];
        
        for (int i = 0; i < grandezza_fisica; i++)
        {
            cout<<"\nInserisci numero "<<i+1<<": ";
            cin>>numeri[i];
        }

        cout<<"\nLa media dell'array e': "<<media(numeri,grandezza_fisica);
        cout<<"\nIl valore massimo dell'array e': "<<trova_Massimo_Minimo(numeri, grandezza_fisica,70);
        cout<<"\nIl valore minimo dell'array e': "<<trova_Massimo_Minimo(numeri, grandezza_fisica,0);
        
        if(trovaValore(numeri, grandezza_fisica))
        {
            cout<<"\nIl numero e' presente.";
        }
        else
        {
            cout<<"\nIl numero non e' presente";
        }

        do
        {
            cout<<"\nVuoi continuare? (s/n): ";
            cin>>x;
            if (x != 's' && x != 'n')
            {
                cout<<"\nIl carattere inserito e' sbagliato ";
            }
        }while(x != 's' && x != 'n');

    }while (x != 'n');
    return 0;
}