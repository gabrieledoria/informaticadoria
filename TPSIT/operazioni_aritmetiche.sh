#!/bin/bash

while true; do
    echo "Scegli un'opzione:"
    echo "1) Operazioni matematiche tra due numeri"
    echo "2) Somma di tutti i numeri inseriti"
    echo "3) Gioco: Indovina il numero"
    echo "4) Esci"
    read -p "Inserisci il numero dell'opzione: " scelta

    case $scelta in
        1)  # Esercizio A1 - Operazioni matematiche tra due numeri
            read -p "Inserisci l'operazione (add, sub, mul, div): " operazione
            read -p "Inserisci il primo numero: " num1
            read -p "Inserisci il secondo numero: " num2

            case $operazione in
                add) risultato=$((num1 + num2)) ;;
                sub) risultato=$((num1 - num2)) ;;
                mul) risultato=$((num1 * num2)) ;;
                div) 
                    if [ $num2 -eq 0 ]; then
                        echo "Errore: divisione per zero!"
                        continue
                    fi
                    risultato=$((num1 / num2))
                    ;;
                *) 
                    echo "Operazione non supportata. Usa: add, sub, mul, div"
                    continue
                    ;;
            esac
            echo "Risultato: $risultato"
            ;;

        2)  # Esercizio B - Somma di tutti i numeri inseriti
            somma=0
            echo "Inserisci i numeri da sommare (digita 'stop' per terminare):"
            while true; do
                read numero
                if [ "$numero" == "stop" ]; then
                    break
                fi
                somma=$((somma + numero))
            done
            echo "Somma totale: $somma"
            ;;

        3)  # Esercizio C - Indovina il numero
            numero_segreto=$((RANDOM % 100 + 1))
            tentativi=0
            echo "Indovina il numero tra 1 e 100!"

            while true; do
                read -p "Inserisci un numero: " guess
                tentativi=$((tentativi + 1))

                if [ "$guess" -eq "$numero_segreto" ]; then
                    echo "Complimenti! Hai indovinato in $tentativi tentativi."
                    break
                elif [ "$guess" -lt "$numero_segreto" ]; then
                    echo "Troppo basso!"
                else
                    echo "Troppo alto!"
                fi
            done
            ;;

        4)  # Esci dal programma
            echo "Uscita..."
            exit 0
            ;;

        *)  # Scelta non valida
            echo "Scelta non valida. Riprova."
            ;;
    esac
done
