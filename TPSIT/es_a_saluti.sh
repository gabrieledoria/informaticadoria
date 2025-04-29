 @echo off
REM --------------------------------
REM Script di benvenuto personalizzato
REM --------------------------------

REM Controllo se manca il nome (primo parametro)
IF "%1"=="" (
    ECHO Errore: devi inserire il nome.
    ECHO Esempio: benvenuto.bat Anna 10
    PAUSE
    EXIT
)

REM Controllo se manca l'orario (secondo parametro)
IF "%2"=="" (
    ECHO Errore: devi inserire l'orario.
    ECHO Esempio: benvenuto.bat Anna 10
    PAUSE
    EXIT
)

REM Se l'orario è minore o uguale a 18, saluta con "Buongiorno"
IF %2 LEQ 18 (
    ECHO Buongiorno, %1!
) ELSE (
    ECHO Buonasera, %1!
)

PAUSE
