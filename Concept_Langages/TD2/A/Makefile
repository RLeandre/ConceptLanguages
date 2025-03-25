CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Dossiers
SRC_DIR = source
EXEC_DIR = exec

# Objets pour le module A
OBJ_DE = $(SRC_DIR)/de.o $(SRC_DIR)/util_rand.o
OBJ_RAND = $(SRC_DIR)/util_rand.o
OBJ_STAT = $(SRC_DIR)/statistiques.o $(SRC_DIR)/util_rand.o

# Exécutables de test pour A (déplacés dans exec)
EXEC_DE = $(EXEC_DIR)/test_de
EXEC_RAND = $(EXEC_DIR)/test_util_rand
EXEC_STAT = $(EXEC_DIR)/test_statistiques

# Compilation des tests
all: $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT)

$(EXEC_DE): $(SRC_DIR)/test_de.o $(OBJ_DE)
	$(CC) $(CFLAGS) -o $(EXEC_DE) $(SRC_DIR)/test_de.o $(OBJ_DE)

$(EXEC_RAND): $(SRC_DIR)/test_util_rand.o $(OBJ_RAND)
	$(CC) $(CFLAGS) -o $(EXEC_RAND) $(SRC_DIR)/test_util_rand.o $(OBJ_RAND)

$(EXEC_STAT): $(SRC_DIR)/test_statistiques.o $(OBJ_STAT)
	$(CC) $(CFLAGS) -o $(EXEC_STAT) $(SRC_DIR)/test_statistiques.o $(OBJ_STAT)

# Compilation des fichiers .c en .o
$(SRC_DIR)/test_de.o: $(SRC_DIR)/test_de.c $(SRC_DIR)/de.h $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/test_de.c -o $(SRC_DIR)/test_de.o

$(SRC_DIR)/test_util_rand.o: $(SRC_DIR)/test_util_rand.c $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/test_util_rand.c -o $(SRC_DIR)/test_util_rand.o

$(SRC_DIR)/test_statistiques.o: $(SRC_DIR)/test_statistiques.c $(SRC_DIR)/statistiques.h $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/test_statistiques.c -o $(SRC_DIR)/test_statistiques.o

$(SRC_DIR)/de.o: $(SRC_DIR)/de.c $(SRC_DIR)/de.h $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/de.c -o $(SRC_DIR)/de.o

$(SRC_DIR)/util_rand.o: $(SRC_DIR)/util_rand.c $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/util_rand.c -o $(SRC_DIR)/util_rand.o

$(SRC_DIR)/statistiques.o: $(SRC_DIR)/statistiques.c $(SRC_DIR)/statistiques.h $(SRC_DIR)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/statistiques.c -o $(SRC_DIR)/statistiques.o

# Nettoyage
clean:
	rm -f $(SRC_DIR)/*.o $(EXEC_DIR)/*.o $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT)

mrproper: clean
	rm -f $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT)
