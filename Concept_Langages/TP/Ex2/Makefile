CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = source/ex2.c source/main.c
OBJ = $(SRC:source/%.c=source/%.o)
EXEC = exec/ex2

# Cible par défaut pour construire l'exécutable
all: $(EXEC)

# Lien des objets pour créer l'exécutable dans le dossier exec
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $@

# Compilation des fichiers source en fichiers objets dans le dossier source
source/%.o: source/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Suppression des fichiers objets et exécutables
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean
