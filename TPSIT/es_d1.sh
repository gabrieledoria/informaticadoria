#!/bin/bash

# Controlla che l'argomento sia un numero positivo
if ! [[ "$1" =~ ^[0-9]+$ ]] || [ "$1" -le 0 ]; then
    echo "Errore: inserisci un num positivo come argomento."
    exit 1
fi

# Numero  righe del triangolo
n=$1
cont=$n

# Ciclo per stampare il triangolo rovesciato
while [ $cont -ge 1 ]; do
    j=1
    
    while [ $j -le $cont ]; do
        echo -n "*"
        ((j++))
    done
    
    echo
    ((cont--))
done
