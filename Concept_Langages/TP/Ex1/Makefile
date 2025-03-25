CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = source/ex1.c source/listeint.c
OBJ = $(SRC:.c=.o)
EXEC = exec/ex1  # Changer le chemin pour que l'exécutable soit dans le dossier "exec"

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)  # Utiliser le chemin "exec/ex1" pour l'exécutable

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o exec/$@  # Les objets doivent aussi aller dans le dossier "exec"

clean:
	rm -f exec/*.o exec/ex1 saveliste.bin  # Supprimer les objets et l'exécutable dans le dossier "exec"

.PHONY: all clean
