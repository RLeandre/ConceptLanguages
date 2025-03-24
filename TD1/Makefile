# Définitions des variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = macro_pscanf
SRC = macro_pscanf.c

# Règle par défaut
all: $(TARGET)

# Compilation de l'exécutable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Préprocessing : arrêter la compilation après cette étape
preprocess:
	$(CC) -E $(SRC) -o $(TARGET).i
	cat $(TARGET).i | less

# Nettoyage des fichiers générés
clean:
	rm -f $(TARGET) $(TARGET).i
