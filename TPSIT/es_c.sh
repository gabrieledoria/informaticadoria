#!/bin/bash


# Genera un numero casuale tra 1 e 100
numero_segreto=$((RANDOM % 100 + 1))
tentativi=0
tentativi_massimi=10  # Numero massimo di tentativi


echo "Benvenuto nel gioco 'Indovina il Numero Segreto'!"
echo "Devi indovinare un numero tra 1 e 100."


# Loop per chiedere all'utente di indovinare
while true; do
    read -p "Inserisci un numero: " numero_utente
    ((tentativi++))


    # Controllo se il valore inserito è un numero
    if ! [[ "$numero_utente" =~ ^[0-9]+$ ]]; then
        echo "Errore: inserisci solo numeri interi!"
        continue
    fi


    # Controllo se il numero è corretto
    if (( numero_utente == numero_segreto )); then
        echo "Complimenti! Hai indovinato il numero in $tentativi tentativi."
        break
    elif (( numero_utente < numero_segreto )); then
        echo "Troppo basso!"
    else
        echo "Troppo alto!"
    fi


    # Controllo se si sono superati i tentativi massimi
    if (( tentativi >= tentativi_massimi )); then
        echo "Hai superato il numero massimo di tentativi! Il numero segreto era $numero_segreto."
        exit 1
    fi
done


exit 0
