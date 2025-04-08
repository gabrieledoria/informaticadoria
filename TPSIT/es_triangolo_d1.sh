#!/bin/bash

# # Salva il numero di righe del triangolo nell variabile 'n'
n=$1

# Inizializza il contatore per il ciclo che stampa le righe
cont=$n

# Ciclo per stampare un triangolo rovesciato
# Ogni ciclo riduce il numero di "*" stampati
while [ $cont -ge 1 ]; do
    j=1
    
    # Stampa '*' per ogni riga, in base al numero di '*'
    while [ $j -le $cont ]; do
        echo -n "*"  # Aggiunge un '*' senza andare a capo
        ((j++))       # Incrementa j per continuare a stampare
    done
    
    # Aggiungi un a capo per passare alla riga successiva
    echo
    
    # Riduci il numero di '*' per la prossima riga
    ((cont--))
done
