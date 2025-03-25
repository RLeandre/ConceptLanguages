CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Dossiers
SRC_DIR_B = source
EXEC_DIR = exec

# Objets pour le module B
OBJ_SOMME = $(SRC_DIR_B)/somme_liste.o ../A/source/util_rand.o
OBJ_SEARCH = $(SRC_DIR_B)/searchArray.o

# Exécutables de test pour B (placés dans exec)
EXEC_SOMME = $(EXEC_DIR)/test_somme_liste
EXEC_SEARCH = $(EXEC_DIR)/test_searchArray

# Compilation des tests
all: $(EXEC_SOMME) $(EXEC_SEARCH)

$(EXEC_SOMME): $(SRC_DIR_B)/test_somme_liste.o $(OBJ_SOMME)
	$(CC) $(CFLAGS) -o $(EXEC_SOMME) $(SRC_DIR_B)/test_somme_liste.o $(OBJ_SOMME)

$(EXEC_SEARCH): $(SRC_DIR_B)/test_searchArray.o $(OBJ_SEARCH)
	$(CC) $(CFLAGS) -o $(EXEC_SEARCH) $(SRC_DIR_B)/test_searchArray.o $(OBJ_SEARCH)

# Compilation des fichiers .c en .o
$(SRC_DIR_B)/test_somme_liste.o: $(SRC_DIR_B)/test_somme_liste.c $(SRC_DIR_B)/somme_liste.h ../A/source/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR_B)/test_somme_liste.c -o $(SRC_DIR_B)/test_somme_liste.o

$(SRC_DIR_B)/somme_liste.o: $(SRC_DIR_B)/somme_liste.c $(SRC_DIR_B)/somme_liste.h ../A/source/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_DIR_B)/somme_liste.c -o $(SRC_DIR_B)/somme_liste.o

$(SRC_DIR_B)/test_searchArray.o: $(SRC_DIR_B)/test_searchArray.c $(SRC_DIR_B)/searchArray.h
	$(CC) $(CFLAGS) -c $(SRC_DIR_B)/test_searchArray.c -o $(SRC_DIR_B)/test_searchArray.o

$(SRC_DIR_B)/searchArray.o: $(SRC_DIR_B)/searchArray.c $(SRC_DIR_B)/searchArray.h
	$(CC) $(CFLAGS) -c $(SRC_DIR_B)/searchArray.c -o $(SRC_DIR_B)/searchArray.o

# Nettoyage
clean:
	rm -f $(SRC_DIR_B)/*.o $(EXEC_DIR)/*.o $(EXEC_SOMME) $(EXEC_SEARCH)

mrproper: clean
	rm -f $(EXEC_SOMME) $(EXEC_SEARCH)
