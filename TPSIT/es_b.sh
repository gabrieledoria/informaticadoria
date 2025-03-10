
#!/bin/bash


# Controllo se ci sono almeno due argomenti (operazione + numeri)
if [ "$#" -lt 2 ]; then
    echo "Errore: numero di argomenti insufficiente."
    echo "Uso: $0 add <numero1> <numero2> [altri numeri...]"
    exit 1
fi


# Controllo che la prima operazione sia "add"
if [ "$1" != "add" ]; then
    echo "Errore: operazione non supportata. Usa 'add'."
    exit 2
fi


# Inizializza la somma a 0 e rimuove il primo argomento (l'operazione)
shift
somma=0


# Ciclo while per sommare tutti gli argomenti
while [ "$#" -gt 0 ]; do
    # Controllo se l'argomento è un numero valido
    if [[ ! "$1" =~ ^-?[0-9]+$ ]]; then
        echo "Errore: '$1' non è un numero valido."
        exit 3
    fi


    somma=$((somma + $1)) # Aggiunge il numero alla somma
    shift                  # Passa al numero successivo
done


# Stampa il risultato finale
echo "Risultato della somma: $somma"


exit 0

