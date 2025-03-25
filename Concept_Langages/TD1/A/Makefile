# Définition du compilateur
CC = gcc  # Utilisation du compilateur GCC

# Options de compilation :
# -Wall  : Affiche tous les avertissements courants
# -Wextra : Affiche des avertissements supplémentaires
# -std=c11 : Utilise le standard C11
CFLAGS = -Wall -Wextra -std=c11

# Nom de l'exécutable généré
TARGET = A5

# Fichier source principal
SRC = A5.c

# Règle par défaut : Compilation de l'exécutable
all: $(TARGET)  # Quand on tape "make", cette règle est exécutée en premier

# Compilation de l'exécutable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)  # Compile "A5.c" en "A5" (équivalent à gcc flags -o A5 A5.c)

# Pré-processing uniquement (arrêt avant compilation)
preprocess:
	$(CC) -E $(SRC) -o $(TARGET).i  # Effectue seulement le pré-processing et génère "A5.i"
	

# Nettoyage des fichiers générés
clean:
	rm -f $(TARGET) $(TARGET).i  # Supprime l'exécutable et le fichier de pré-processing

