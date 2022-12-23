# Laboratorio di elettronica - Fisica, terzo anno (A.A. 2022/2023)

In questa repo verrano caricati tutti i file riguardanti le varie prove di laboratorio svolte durante l'anno.

## Laboratorio 1 - Misura della caratteristica IV di un diodo a giunzione p-n.
Tutti i file utilizzati per questa esperienza possono essere trovati [qui](Prima%20prova).

In questo laboratorio abbiamo misurato la caratteristica corrente tensione di due diodi, uno al silicio e uno al germanio. Dopo aver verificato la corretta calibrazione di multimetro e oscilloscopio, sono stati raccolti diversi valori di I e V; dall’analisi dei grafici ottenuti sono stati calcolati i due parametri fondamentali della caratteristica I-V, ossia la corrente inversa $I_0$ e il prodotto $\eta$ $V_T$ , dove $\eta$ è il fattore di idealità e $V_T$ è l’equivalente in tensione della temperatura. Infine i valori ottenuti sono stati confrontati coi valori attesi: dal confronto abbiamo ottenuto che le correnti $I_0$ erano in accordo per entrambi i diodi. Al contrario invece per quanto riguarda gli $\eta$ $V_T$ abbiamo ottenuto che in entrambi i casi il valore ottenuto dal fit sovrastimava il valore atteso (in particolare nel caso del germanio risulta essere quasi il doppio).

Si può visualizzare la relazione in formato pdf [qui](Prima%20prova/Relazione%20-%20Prima%20prova.pdf).

### Istruzioni di compilazione:
Per compilare da terminale bisogna scaricare tutti i file nella [cartella](Prima%20prova); in più è necessario aver installato TeX Live sul proprio dispositivo e l'estensione LaTeX Workshop su VS Code. A questo punto una volta entrati nella cartella corrente bisogna eseguire il comando 'pdflatex main.tex' che compila il main e crea il file 'main.pdf'. Eseguendo poi '.\cleanup.sh' vengono eliminati tutti i file di compilazione automaticamente generati dal computer e si crea il file [pdf](Prima%20prova/Relazione%20-%20Prima%20prova.pdf).

## Laboratorio 2 - Misura della caratteristica di uscita di un transistor BJT P-N-P in configurazione a emettitore comune
Tutti i file utilizzati per questa esperienza possono essere trovati [qui](Seconda%20prova).

In questo laboratorio abbiamo preso un transistor BJT P-N-P e abbiamo misurato la sua caratteristica di uscita in configurazione a emettitore comune. Ciò significa che abbiamo misurato i valori della corrente di collettore $I_C$ in funzione della tensione tra collettore ed emettitore $V_{CE}$  per valori fissati della corrente di base $I_B = -0.2 mA$ e $I_B = -0.1 mA$. Dal fit lineare pesato della caratteristica $I_C-V_{CE}$ nella regione attiva, si trovano i parametri che rappresentano la tensione di Early $V_A$ e la resistenza di uscita per un valore fissato di $I_B$, quindi si calcola la conduttanza di uscita $g$ e il guadagno di corrente $\beta$. 

Si può visualizzare la relazione in formato pdf [qui](Seconda%20prova/Relazione%20-%20Seconda%20prova.pdf).
