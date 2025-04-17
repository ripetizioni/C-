# Guida al C++: Esempi e Spiegazioni

Benvenuti in questa guida al linguaggio di programmazione C++. Questo repository è stato progettato per aiutarvi a comprendere i concetti fondamentali del C++ attraverso spiegazioni teoriche ed esempi pratici. Di seguito troverete una panoramica degli argomenti trattati.

## Indice
1. [Array Monodimensionali](#array-monodimensionali)
2. [Array Bidimensionali](#array-bidimensionali)
3. [Strutture (Struct)](#strutture-struct)
4. [Gestione delle Presenze (esempio)](#esempio-gestione-delle-presenze)
5. [Cicli in C++](#cicli-in-c)
6. [Strutture di controllo condizionali](#strutture-di-controllo-condizionali)

---

## Array Monodimensionali

Gli array sono strutture dati che permettono di memorizzare una collezione di elementi dello stesso tipo. In C++, gli array hanno dimensione fissa e sono indicizzati a partire da 0.

### Dichiarazione e Inizializzazione

```cpp
// Dichiarazione di un array di 5 interi
int numeri[5];

// Inizializzazione al momento della dichiarazione
int numeri[5] = {1, 2, 3, 4, 5};
```

### Accesso agli Elementi

```cpp
int terzoNumero = numeri[2]; // Accede al terzo elemento (indice 2)
numeri[0] = 10;             // Modifica il primo elemento
```

### Esempio Pratico

Nel nostro esempio in `/Array/esempio.cpp`, possiamo vedere come:
- Chiedere all'utente la dimensione dell'array
- Popolare l'array con valori inseriti dall'utente
- Calcolare la media degli elementi
- Trovare il valore massimo e minimo
- Cercare un valore specifico nell'array

```cpp
float numeri[grandezza_fisica];
        
for (int i = 0; i < grandezza_fisica; i++)
{
    cout<<"\nInserisci numero "<<i+1<<": ";
    cin>>numeri[i];
}
```

### Operazioni Comuni sugli Array

La libreria `/Array/libreria.h` implementa diverse funzioni utili:

1. **Calcolo della media**:
```cpp
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
```

2. **Trovare il massimo/minimo**:
```cpp
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
```

3. **Ricerca di un valore**:
```cpp
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
```

4. **Algoritmi di ordinamento**:
   - Bubble Sort
   - Selection Sort
   - Insertion Sort

---

## Array Bidimensionali

Gli array bidimensionali sono matrici che organizzano gli elementi in righe e colonne. Sono utili per rappresentare dati tabulari o griglie.

### Dichiarazione e Inizializzazione

```cpp
// Dichiarazione di un array bidimensionale 3x3
int matrice[3][3];

// Inizializzazione al momento della dichiarazione
int matrice[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### Accesso agli Elementi

```cpp
int elemento = matrice[1][2]; // Accede all'elemento nella riga 1, colonna 2
matrice[0][0] = 10;          // Modifica l'elemento in alto a sinistra
```

### Iterazione su un Array Bidimensionale

Per accedere a tutti gli elementi di un array bidimensionale, utilizziamo due cicli `for` annidati:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrice[i][j] << " ";
    }
    cout << endl;
}
```

### Esempio Pratico: Gestione di una Libreria

Nel nostro esempio in `/array bidimensionali/`, abbiamo implementato un sistema di gestione di una libreria utilizzando un array bidimensionale:

- Ogni riga rappresenta uno scaffale
- Ogni colonna rappresenta una posizione su quello scaffale
- I libri vengono rappresentati come stringhe

```cpp
// Dichiarazione costanti per dimensioni della libreria
const int num_colonne = 5; // colonne
const int num_righe = 6;   // righe

// Dichiarazione array bidimensionale per la libreria
string libreria[num_righe][num_colonne];
```

Operazioni implementate:
1. Inizializzazione della libreria (tutti gli spazi vuoti)
2. Aggiunta di un libro in una posizione specifica
3. Rimozione di un libro da una posizione specifica
4. Visualizzazione dello stato attuale della libreria

---

## Strutture (Struct)

Le strutture in C++ permettono di raggruppare variabili di diversi tipi sotto un unico nome. Sono utili per organizzare dati correlati.

### Definizione di una Struct

```cpp
struct Studente {
    string nome;
    string cognome;
    int classe;
    float voti[50];
    int dimensioneLogica;
};
```

### Creazione e Utilizzo di Istanze

```cpp
// Creazione di un'istanza
Studente s;

// Assegnazione valori
s.nome = "Mario";
s.cognome = "Rossi";
s.classe = 3;
```

### Esempio Pratico: Sistema di Gestione Studenti

Nel nostro progetto `/struct/`, abbiamo implementato un sistema di gestione degli studenti e delle classi:

1. Creazione di una struct `Studente`:
```cpp
struct Studente {
    string nome;
    string cognome;
    float voti[50];
    int dimensioneLogica=0;
};
```

2. Creazione di una struct `Classe` che contiene un array di studenti:
```cpp
struct Classe {
    string nome_classe;
    int n_studenti=0;
    Studente studenti[50];
};
```

3. Funzioni per gestire studenti e classi:
   - Calcolo della media dei voti di uno studente
   - Trovare lo studente con la media più alta
   - Calcolo della media di una classe
   - Determinare la classe con la media più alta

---

## Esempio gestione delle Presenze

Nella cartella `/esercizio_classe/`, abbiamo implementato un sistema di registrazione delle presenze che utilizza tutti e tre i tipi di cicli in C++.

Funzionalità:
1. Inserimento del numero di studenti nella classe
2. Inserimento dei nomi degli studenti (usando ciclo `for`)
3. Registrazione delle presenze (usando ciclo `while`)
4. Menu per visualizzare informazioni (usando ciclo `do-while`)

```cpp
// Inserimento nomi con ciclo for
for(int i=0; i<numeroStudenti;i++){
    cout<<"inserisci il nome dello studente: ";
    cin>>nomeStudenti[i];
}
    
// Registrazione presenze con ciclo while
int j=0;
while(j<numeroStudenti){
    char presenza;
    cout<<"studente "<<nomeStudenti[j]<<" - Inserisci P se lo studente e presente o A se lo studente e assente: ";
    cin>>presenza;
    if(presenza == 'P'|| presenza =='A'){
        cout<<"Stato inserito!";
        presenze[j]=presenza;
        j++;
    }else{
        cout<<"Errore! Hai inserito un carattere non consentito";
    } 
}
```

---

## Cicli in C++

I cicli sono strutture fondamentali che permettono di eseguire un blocco di codice ripetutamente. In C++ esistono tre tipi principali di cicli:

### 1. Ciclo `for`

Il ciclo `for` è utilizzato quando si conosce in anticipo il numero di iterazioni. È composto da tre parti: inizializzazione, condizione e incremento.

```cpp
for (int i = 0; i < 10; i++) {
    cout << i << " ";
}
```

Questo ciclo stamperà i numeri da 0 a 9. È particolarmente adatto per iterare attraverso gli elementi di un array.

**Esempio pratico:** Nel nostro codice, utilizziamo il ciclo `for` per inizializzare una libreria:

```cpp
for (int i = 0; i < num_righe; i++) {
    for (int j = 0; j < num_colonne; j++) {
        libreria[i][j] = " "; // Imposta ogni posizione della libreria come vuota
    }
}
```

### 2. Ciclo `while`

Il ciclo `while` esegue un blocco di codice finché una condizione specificata è vera. La condizione viene valutata prima di ogni iterazione.

```cpp
int i = 0;
while (i < 10) {
    cout << i << " ";
    i++;
}
```

Questo ciclo stamperà anche i numeri da 0 a 9. È particolarmente utile quando non si conosce in anticipo il numero esatto di iterazioni.

**Esempio pratico:** Nel nostro codice, utilizziamo il ciclo `while` per validare input:

```cpp
while (grandezza_fisica <= 0) {
    cout<<"\nIl numero inserito non e' corretto, inserisci altro numero: ";
    cin>>grandezza_fisica;
}
```

### 3. Ciclo `do-while`

Il ciclo `do-while` è simile al ciclo `while`, ma garantisce che il blocco di codice venga eseguito almeno una volta, poiché la condizione viene valutata dopo ogni iterazione.

```cpp
int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < 10);
```

Questo ciclo stamperà i numeri da 0 a 9, ma è garantito che venga eseguito almeno una volta, anche se la condizione è inizialmente falsa.

**Esempio pratico:** Nel nostro codice, utilizziamo il ciclo `do-while` per implementare menu di scelta:

```cpp
do {
    cout<<"\nVuoi continuare? (s/n): ";
    cin>>x;
    if (x != 's' && x != 'n') {
        cout<<"\nIl carattere inserito e' sbagliato ";
    }
} while(x != 's' && x != 'n');
```

### Cicli Annidati

I cicli possono essere annidati l'uno dentro l'altro. Questo è particolarmente utile quando si lavora con strutture dati multidimensionali come gli array bidimensionali.

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

**Esempio pratico:** Nel nostro esempio di libreria, utilizziamo cicli annidati per stampare lo stato della libreria:

```cpp
void stampaLibreria(string libreria[num_righe][num_colonne]) {
    cout <<"\n";
    for (int i = 0; i < num_righe; i++) {
        for (int j = 0; j < num_colonne; j++) {
            if (libreria[i][j] == " ") {
                cout << " - ";
            } else {
                cout << libreria[i][j] << " ";
            }
        }
        cout << endl;
    }
}
```

---

## Strutture di controllo condizionali

Le strutture di controllo condizionali permettono di eseguire diverse porzioni di codice in base a determinate condizioni. In C++ le più importanti sono `if-else` e `switch-case`.

### 1. Istruzioni `if-else`

Le istruzioni `if-else` permettono di eseguire un blocco di codice solo se una condizione è vera, e un altro blocco se la condizione è falsa.

#### Sintassi base

```cpp
if (condizione) {
    // Codice eseguito se la condizione è vera
} else {
    // Codice eseguito se la condizione è falsa
}
```

#### If-else if-else

È possibile concatenare più condizioni usando `else if`:

```cpp
if (condizione1) {
    // Codice eseguito se condizione1 è vera
} else if (condizione2) {
    // Codice eseguito se condizione1 è falsa e condizione2 è vera
} else {
    // Codice eseguito se entrambe le condizioni sono false
}
```

#### Espressioni condizionali

Le condizioni possono usare vari operatori:
- Uguaglianza: `==`
- Disuguaglianza: `!=`
- Maggiore/minore: `>`, `<`, `>=`, `<=`
- Operatori logici: `&&` (AND), `||` (OR), `!` (NOT)

#### Esempio Pratico

Nel nostro esempio in `/Array/esempio.cpp`, utilizziamo un'istruzione `if-else` per verificare se un numero è presente nell'array:

```cpp
if(trovaValore(numeri, grandezza_fisica)) {
    cout<<"\nIl numero e' presente.";
} else {
    cout<<"\nIl numero non e' presente";
}
```

In questo altro esempio, usiamo `if-else` per convalidare l'input dell'utente nel registrare le presenze degli studenti:

```cpp
if(presenza == 'P'|| presenza =='A') {
    cout<<"Stato inserito!";
    presenze[j]=presenza;
    j++;
} else {
    cout<<"Errore! Hai inserito un carattere non consentito";
}
```

### 2. Istruzioni `switch-case`

L'istruzione `switch-case` è un'alternativa all'uso di catene `if-else` quando si devono confrontare una variabile con più valori costanti.

#### Sintassi base

```cpp
switch (espressione) {
    case valore1:
        // Codice eseguito se espressione == valore1
        break;
    case valore2:
        // Codice eseguito se espressione == valore2
        break;
    // ... altri casi ...
    default:
        // Codice eseguito se nessun caso corrisponde
        break;
}
```

**Nota**: L'istruzione `break` è necessaria per evitare il "fall-through", ovvero l'esecuzione del codice nei casi successivi.

#### Esempio Pratico

Nel nostro esempio in `/struct/main.cpp`, utilizziamo un `switch-case` per implementare un menu utente:

```cpp
switch (scelta) {
    case 'c': {
        cout<<"\nDimmi il nome della classe: ";
        cin>>scuola[n_classi].nome_classe;
        n_classi++;
        cout<<"\nClasse aggiunta, sono presenti: "<<scuola[n_classi].n_studenti<<" studenti";
        break;
    }
    case 'a': {
        int n;
        //stampa classi
        for(int i=0;i<n_classi;i++) {
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
    // ... altri casi ...
    default: {
        // Gestione della scelta non valida
        cout<<"\nScelta non valida";
        break;
    }
}
```

### 3. Confronto tra `if-else` e `switch-case`

| Caratteristica     | if-else                     | switch-case                      |
|--------------------|-----------------------------|---------------------------------|
| Tipo di confronti  | Qualsiasi espressione booleana | Solo uguaglianza con costanti   |
| Intervalli di valori | Può gestire intervalli     | Non gestisce intervalli direttamente |
| Chiarezza del codice | Più semplice per pochi casi | Più chiaro per molti casi       |
| Performance       | Valutazione sequenziale     | Potenzialmente più efficiente (tabella di salto) |

### 4. Operatore ternario

C++ offre anche l'operatore ternario (`? :`), una forma compatta di `if-else`:

```cpp
// Sintassi: condizione ? valore_se_vero : valore_se_falso
int max = (a > b) ? a : b;  // Assegna a max il valore maggiore tra a e b
```

### 5. Buone pratiche

- Usare `if-else` per logica condizionale complessa o intervalli di valori
- Usare `switch-case` quando si confronta una variabile con multipli valori costanti
- Assicurarsi di gestire tutti i casi possibili (usare `default` in `switch`)
- Preferire le parentesi graffe `{}` anche per blocchi di una sola istruzione (migliora la leggibilità)
- Evitare costrutti annidati troppo complessi che rendono il codice difficile da leggere