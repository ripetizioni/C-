#include <string>
#include <iostream>
#include "studente.h"

using namespace std;

struct Classe
{
    string nome_classe;
    int n_studenti=0;
    Studente studenti[50];
};

/**
 * @brief Stampa le informazioni di una classe di studenti.
 * 
 * Questa funzione itera attraverso un array di strutture Studente e stampa le informazioni
 * di ciascuno studente utilizzando la funzione stampaStudente.
 * 
 * @param classe Array di strutture Studente che rappresenta la classe.
 * @param dimensione Numero di studenti nella classe.
 */
void stampaClasse(struct Studente classe[], int dimensione)
{
    for (int i = 0; i < dimensione; i++)
    {
        cout<<"\n Studente numero: "<<i;
        stampaStudente(classe[i]);
    }
    return;
}

/**
 * @brief Trova lo studente con la media più alta in un array di studenti.
 *
 * Questa funzione itera attraverso un array di strutture Studente e
 * determina quale studente ha la media più alta. Restituisce una copia
 * della struttura Studente con la media più alta.
 *
 * @param A Array di strutture Studente.
 * @param dimensione Numero di elementi nell'array A.
 * @return La struttura Studente con la media più alta.
 */
struct Studente miglioreStudente(struct Studente A[], int dimensione)
{
    // Inizializza il miglior studente come il primo della lista
    struct Studente migliore=A[0];

    // Itera attraverso tutti gli studenti
    for(int i=1; i<dimensione;i++)
    {
        // Se la media del miglior studente è inferiore alla media dello studente corrente
        if(calcolaMedia(migliore)<calcolaMedia(A[i]))
        {
            // Aggiorna il miglior studente con lo studente corrente
            migliore=A[i];
        }
    }
    // Ritorna il miglior studente
    return migliore;
}

/**
 * @brief Calcola la media delle medie degli studenti di una classe.
 * 
 * Questa funzione prende una struttura Classe come input e calcola la media
 * delle medie degli studenti presenti nella classe.
 * 
 * @param prima La struttura Classe contenente gli studenti e il numero di studenti.
 * @return float La media delle medie degli studenti della classe.
 */
float mediaClasse(struct Classe prima)
{
    // Inizializza la variabile media a 0
    float media=0;
    // Ciclo per ogni studente nella classe
    for (int i = 0; i < prima.n_studenti; i++)
    {
        // Aggiunge la media dello studente corrente alla variabile media
        media+=calcolaMedia(prima.studenti[i]);
    }
    // Calcola la media totale dividendo la somma delle medie per il numero di studenti
    media=media/prima.n_studenti;
    // Ritorna la media calcolata
    return media;
}

/**
 * @brief Determina la classe migliore in base alla loro media.
 * 
 * Questa funzione itera attraverso un array di strutture `Classe`, confronta le loro medie,
 * e restituisce il nome della classe con la media più alta.
 * 
 * @param scuola Un array di strutture `Classe` che rappresenta le classi della scuola.
 * @param dimensione Il numero di elementi nell'array `scuola`.
 * @return Una `string` che rappresenta il nome della classe con la media più alta.
 */
string classeMigliore(struct Classe scuola[], int dimensione)
{
    // Inizializza il nome della classe migliore
    string migliore;
    // Inizializza l'indice della classe con la media più alta
    int best = 0;
    
    // Itera attraverso tutte le classi
    for (int i = 0; i < dimensione; i++)
    {
        // Se la media della classe corrente è maggiore della media della classe migliore
        if (mediaClasse(scuola[i]) > mediaClasse(scuola[best]))
        {
            // Aggiorna l'indice della classe migliore
            best = i;
        }
    }
    
    // Assegna il nome della classe con la media più alta
    migliore = scuola[best].nome_classe;
    
    // Ritorna il nome della classe migliore
    return migliore;
}