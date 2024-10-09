# Variables
CC = gcc            # Le compilateur à utiliser
CFLAGS = -g -W -Wall -std=c99  # Options de compilation (ex: afficher tous les warnings, générer des informations de débogage)

# 1. Règle pour compiler l'exécutable 'Matrice'
Matrice: app.o matrix_io.o
	$(CC) app.o matrix_io.o $(CFLAGS) -o Matrice

# 2. Règle pour compiler les fichiers objet (.o)
app.o: app.c matrix_io.h

matrix_io.o: matrix_io.c matrix_io.h

# 3. Règle pour nettoyer les fichiers générés (optionnel mais souvent utile)
clean:
	rm -f *.o Matrice
