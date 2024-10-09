# Variables
CC = gcc            # Le compilateur à utiliser
CFLAGS = -g -W -Wall -std=c99  # Options de compilation (ex: afficher tous les warnings, générer des informations de débogage)

# 1. Règle pour compiler l'exécutable 'Vehicule'
Vehicule: main.o vehicule.o
	$(CC) main.o vehicule.o $(CFLAGS) -o Vehicule

# 2. Règle pour compiler les fichiers objet (.o)
main.o: main.c vehicule.h

vehicule.o: vehicule.c vehicule.h

# 3. Règle pour nettoyer les fichiers générés (optionnel mais souvent utile)
clean:
	rm -f *.o Vehicule
