#!/bin/bash

echo "Inserisci l'operazione (add, sub, mul, div):"
read operazione
echo "Inserisci il primo numero:"
read num1
echo "Inserisci il secondo numero:"
read num2

if [ "$operazione" = "add" ]; then
    risultato=$((num1 + num2))
elif [ "$operazione" = "sub" ]; then
    risultato=$((num1 - num2))
elif [ "$operazione" = "mul" ]; then
    risultato=$((num1 * num2))
elif [ "$operazione" = "div" ]; then
    risultato=$((num1 / num2))
else
    echo "Operazione non valida!"
    exit 1
fi

echo "Risultato: $risultato"
