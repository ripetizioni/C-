/*
    La selezione attiva è una struttura comune nei file di intestazione C++ nota come "include guard". Gli include guard vengono utilizzati per prevenire inclusioni multiple dello stesso file di intestazione, che possono portare a errori e tempi di compilazione aumentati.
    La direttiva #ifndef sta per "if not defined" (se non definito). Controlla se il macro [BIDIMENSIONALI_H](c++/array bidimensionali.h ) è già stato definito. Se non è stato definito, il codice tra #ifndef e #endif verrà incluso nel processo di compilazione.
    La direttiva #define che segue definisce il macro [BIDIMENSIONALI_H](c++/array bidimensionali.h ). Questo assicura che se il file di intestazione viene incluso di nuovo nella stessa unità di compilazione, il controllo #ifndef fallirà e il contenuto del file di intestazione verrà saltato, prevenendo errori di ridefinizione.
    In sintesi, queste righe assicurano che il contenuto del file [c++/array bidimensionali/bidimensionali.h](c++/array bidimensionali.h ) venga incluso solo una volta in una determinata compilazione, il che aiuta a mantenere l'integrità del codice e migliora l'efficienza della compilazione.
*/

#ifndef BIDIMENSIONALI_H
#define BIDIMENSIONALI_H
#include <iostream>
#include <string>

using namespace std;

// Costanti per il numero di colonne e righe della libreria
const int num_colonne = 5; // colonne
const int num_righe = 6;   // righe

// Dichiarazione delle funzioni per la gestione della libreria
void inizializzaLibreria(string libreria[num_righe][num_colonne]);
void aggiungiLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione, string libro);
void rimuoviLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione);
void stampaLibreria(string libreria[num_righe][num_colonne]);

#endif // BIDIMENSIONALI_H

// Funzione per inizializzare la libreria con spazi vuoti
void inizializzaLibreria(string libreria[num_righe][num_colonne])
{
    for (int i = 0; i < num_righe; i++)
    {
        for (int j = 0; j < num_colonne; j++)
        {
            libreria[i][j] = " "; // Imposta ogni posizione della libreria come vuota
        }
    }
}

// Funzione per aggiungere un libro alla libreria
void aggiungiLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione, string libro)
{
    // Controlla se i valori di numScaffale e numPosizione sono validi
    while ((numScaffale < 0 || numScaffale >= num_righe) || (numPosizione < 0 || numPosizione >= num_colonne))
    {
        cout << "\n Valori sbagliati, inserisci numScaffale: ";
        cin >> numScaffale;
        cout << "\n Valori sbagliati, inserisci numPosizione: ";
        cin >> numPosizione;
    }
    // Controlla se la posizione è già occupata
    if (libreria[numScaffale][numPosizione] != " ")
    {
        cout << "\n In questa posizione c'e' gia' un libro: " << libreria[numScaffale][numPosizione];
    }
    else
    {
        libreria[numScaffale][numPosizione] = libro; // Aggiunge il libro alla posizione specificata
        cout << "\n Libro aggiunto " << libreria[numScaffale][numPosizione];
    }
}

// Funzione per rimuovere un libro dalla libreria
void rimuoviLibro(string libreria[num_righe][num_colonne], int numScaffale, int numPosizione)
{
    // Controlla se i valori di numScaffale e numPosizione sono validi
    while ((numScaffale < 0 || numScaffale >= num_righe) || (numPosizione < 0 || numPosizione >= num_colonne))
    {
        cout << "\n Valori sbagliati, inserisci numScaffale: ";
        cin >> numScaffale;
        cout << "\n Valori sbagliati, inserisci numPosizione: ";
        cin >> numPosizione;
    }
    // Controlla se la posizione è già vuota
    if (libreria[numScaffale][numPosizione] == " ")
    {
        cout << "\n In questa posizione non c'è nessun libro ";
    }
    else
    {
        libreria[numScaffale][numPosizione] = " "; // Rimuove il libro dalla posizione specificata
        cout << "\n Libro rimosso ";
    }
}

// Funzione per stampare lo stato attuale della libreria
void stampaLibreria(string libreria[num_righe][num_colonne])
{
    cout <<"\n";
    for (int i = 0; i < num_righe; i++)
    {
        for (int j = 0; j < num_colonne; j++)
        {
            if (libreria[i][j] == " ")
            {
                cout << " - "; // Stampa un trattino per le posizioni vuote
            }
            else
            {
                cout << libreria[i][j] << " "; // Stampa il nome del libro per le posizioni occupate
            }
        }
        cout << endl; // Aggiunge un newline alla fine di ogni riga
    }
}