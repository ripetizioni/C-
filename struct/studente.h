#include <string>
#include <iostream>

using namespace std;

struct Studente
/**
 * @brief Struct representing a student.
 * 
 * This struct contains information about a student, including their name, surname,
 * class, grades, and the logical size of the grades array.
 * 
 * @var nome The first name of the student.
 * @var cognome The last name of the student.
 * @var voti An array of grades for the student, with a maximum size of 50.
 * @var dimensioneLogica The logical size of the grades array, indicating the number of grades actually stored.
 */
{
    string nome;
    string cognome;
    float voti[50];
    int dimensioneLogica=0;

};

void stampaStudente(struct Studente A)
{
    cout<<"\nNome: "<<A.nome<<" Cognome: "<<A.cognome;
    return;
}

/**
 * @brief Calcola la media dei voti di uno studente.
 * 
 * Questa funzione prende in input una struttura Studente e calcola la media
 * dei voti contenuti nell'array voti della struttura.
 * 
 * @param A La struttura Studente contenente i voti e la dimensione logica.
 * @return La media dei voti come valore float.
 */
float calcolaMedia(struct Studente A)
{
    float somma = 0;
    for (int i = 0; i < A.dimensioneLogica; i++)
    {
        somma=somma+A.voti[i];
    }
    somma=somma/A.dimensioneLogica;
    return somma;
}