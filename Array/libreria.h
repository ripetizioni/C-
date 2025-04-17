#include <iostream>
using namespace std;

float media(float arr[], float dimensione)
{
    float somma = 0;
    for (int i = 0; i < dimensione; i++)
    {
        somma = somma + arr[i];
    }
    float media = somma / dimensione;
    return media;
}

float trova_Massimo_Minimo(float arr[], float dimensione, int s)
{
    float valore = arr[0];
    for (int i = 1; i < dimensione; i++)
    {
        // trova il massimo valore
        if (s != 0)
        {
            if (valore < arr[i])
            {
                valore = arr[i];
            }
        }
        // trova il mimimo valore
        else
        {
            if (valore > arr[i])
            {
                valore = arr[i];
            }
        }
    }
    return valore;
}

bool trovaValore(float arr[], float dimensione)
{
    float numero;
    cout << "\nInserisci il numero da cercare: ";
    cin >> numero;
    for (int i = 0; i < dimensione; i++)
    {
        if (numero == arr[i])
        {
            return true;
        }
    }
    return false;
}

// Funzione per ordinare un array usando il Bubble Sort
void bubbleSort(float arr[], int n)
{
    // Ciclo per ogni elemento dell'array
    for (int i = 0; i < n - 1; i++)
    {
        // Ciclo per confrontare gli elementi adiacenti
        for (int j = 0; j < n - i - 1; j++)
        {
            // Se l'elemento corrente è maggiore del successivo, scambiali
            if (arr[j] > arr[j + 1])
            {
                // Scambia arr[j] e arr[j + 1]
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Funzione per ordinare un array usando il Selection Sort
void selectionSort(float arr[], int n)
{
    // Ciclo per ogni elemento dell'array
    for (int i = 0; i < n - 1; i++)
    {
        // Trova il minimo elemento nell'array non ordinato
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            // Se l'elemento corrente è minore del minimo trovato, aggiorna minIndex
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Scambia il minimo elemento trovato con il primo elemento non ordinato
        float temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Funzione per ordinare un array usando l'Insertion Sort
void insertionSort(float arr[], int n)
{
    // Ciclo per ogni elemento dell'array a partire dal secondo
    for (int i = 1; i < n; i++)
    {
        // Salva l'elemento corrente come chiave
        float key = arr[i];
        int j = i - 1;
        // Sposta gli elementi di arr[0..i-1], che sono maggiori di key, di una posizione avanti rispetto alla loro posizione attuale
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Inserisci la chiave nella posizione corretta
        arr[j + 1] = key;
    }
}