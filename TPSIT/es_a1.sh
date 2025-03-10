#!/bin/bash

# Controllo del numero di parametri
if [ "$#" -ne 3 ]; then
    echo "Uso: $0 <operazione> <numero1> <numero2>"
    echo "Operazioni supportate: add, sub, mul, div"
    exit 1
fi

# Assegna i parametri a variabili
operazione=$1
num1=$2
num2=$3

# Verifica che i secondi due argomenti siano numeri
if ! [[ "$num1" =~ ^-?[0-9]+$ ]] || ! [[ "$num2" =~ ^-?[0-9]+$ ]]; then
    echo "Errore: gli operandi devono essere numeri interi."
    exit 1
fi

# Ciclo per l'esecuzione dell'operazione
while true; do
    if [ "$operazione" = "add" ]; then
        echo "Risultato della somma: $((num1 + num2))"
        break
    fi
    
    if [ "$operazione" = "sub" ]; then
        echo "Risultato della sottrazione: $((num1 - num2))"
        break
    fi

    if [ "$operazione" = "mul" ]; then
        echo "Risultato della moltiplicazione: $((num1 * num2))"
        break
    fi

    if [ "$operazione" = "div" ]; then
        if [ "$num2" -eq 0 ]; then
            echo "Errore: divisione per zero non permessa."
            exit 1
        fi
        echo "Risultato della divisione: $((num1 / num2))"
        break
    fi

    # Se l'operazione non è valida, mostra un messaggio di errore e interrompe
    echo "Errore: operazione non valida. Usa add, sub, mul o div."
    exit 1
done

exit 0