#!/bin/bash

# Controllo del numero di parametri
if [ "$#" -ne 3 ]; then
    echo "Errore: numero di argomenti errato."
    echo "Uso: $0 <operazione> <numero1> <numero2>"
    echo "Operazioni supportate: add, sub, mul, div"
    exit 1
fi

# Assegna i parametri a variabili
operazione=$1
num1=$2
num2=$3

# Controllo che num1 e num2 siano numeri interi
while [[ ! "$num1" =~ ^-?[0-9]+$ || ! "$num2" =~ ^-?[0-9]+$ ]]; do
    echo "Errore: gli operandi devono essere numeri interi."
    exit 2
done

# Controllo se l'operazione è valida
while [[ "$operazione" != "add" && "$operazione" != "sub" && "$operazione" != "mul" && "$operazione" != "div" ]]; do
    echo "Errore: operazione non valida. Usa add, sub, mul o div."
    exit 3
done

# Esegue l'operazione
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
            exit 4
        fi
        echo "Risultato della divisione: $((num1 / num2))"
        break
    fi
done

exit 0
