# Traccia 20 - Prova all'impronta Programmazione I #

Dato un elenco (array) di persone partecipanti a un concorso, ordinare l’elenco in ordine alfabetico in base al campo cognome. La struttura che identifica il partecipante è:

struct persona {char *nome; char *cognome;};
typedef struct persona id;
struct partecipante {id *utente; unsigned short codice; };
