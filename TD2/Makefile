# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Dossiers
SRC_A = A
SRC_B = B

# Objets pour chaque module
OBJ_DE = $(SRC_A)/de.o $(SRC_A)/util_rand.o
OBJ_RAND = $(SRC_A)/util_rand.o
OBJ_STAT = $(SRC_A)/statistiques.o $(SRC_A)/util_rand.o  # Utilise aussi util_rand
OBJ_SOMME = $(SRC_B)/somme_liste.o $(SRC_A)/util_rand.o  # Ajout de somme_liste
OBJ_SEARCH = $(SRC_B)/searchArray.o  # Ajout de l'objet pour la fonction searchArray

# Exécutables de test
EXEC_DE = test_de
EXEC_RAND = test_util_rand
EXEC_STAT = test_statistiques  # Ajout du test statistiques
EXEC_SOMME = test_somme_liste  # Ajout du test somme_liste
EXEC_SEARCH = test_searchArray  # Exécutable pour le programme searchArray

# Compilation des tests
all: $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT) $(EXEC_SOMME) $(EXEC_SEARCH)  # Ajout du test searchArray

# Test de test_de.c
$(EXEC_DE): $(SRC_A)/test_de.o $(OBJ_DE)
	$(CC) $(CFLAGS) -o $(EXEC_DE) $(SRC_A)/test_de.o $(OBJ_DE)

# Test de test_util_rand.c
$(EXEC_RAND): $(SRC_A)/test_util_rand.o $(OBJ_RAND)
	$(CC) $(CFLAGS) -o $(EXEC_RAND) $(SRC_A)/test_util_rand.o $(OBJ_RAND)

# Test de test_statistiques.c
$(EXEC_STAT): $(SRC_A)/test_statistiques.o $(OBJ_STAT)
	$(CC) $(CFLAGS) -o $(EXEC_STAT) $(SRC_A)/test_statistiques.o $(OBJ_STAT)

# Test de test_somme_liste.c dans le dossier B
$(EXEC_SOMME): $(SRC_B)/test_somme_liste.o $(OBJ_SOMME)
	$(CC) $(CFLAGS) -o $(EXEC_SOMME) $(SRC_B)/test_somme_liste.o $(OBJ_SOMME)

# Test de test_searchArray.c dans le dossier B
$(EXEC_SEARCH): $(SRC_B)/test_searchArray.o $(OBJ_SEARCH)
	$(CC) $(CFLAGS) -o $(EXEC_SEARCH) $(SRC_B)/test_searchArray.o $(OBJ_SEARCH)

# Compilation des fichiers .c en .o
$(SRC_A)/test_de.o: $(SRC_A)/test_de.c $(SRC_A)/de.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/test_de.c -o $(SRC_A)/test_de.o

$(SRC_A)/test_util_rand.o: $(SRC_A)/test_util_rand.c $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/test_util_rand.c -o $(SRC_A)/test_util_rand.o

$(SRC_A)/test_statistiques.o: $(SRC_A)/test_statistiques.c $(SRC_A)/statistiques.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/test_statistiques.c -o $(SRC_A)/test_statistiques.o

$(SRC_A)/de.o: $(SRC_A)/de.c $(SRC_A)/de.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/de.c -o $(SRC_A)/de.o

$(SRC_A)/util_rand.o: $(SRC_A)/util_rand.c $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/util_rand.c -o $(SRC_A)/util_rand.o

$(SRC_A)/statistiques.o: $(SRC_A)/statistiques.c $(SRC_A)/statistiques.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_A)/statistiques.c -o $(SRC_A)/statistiques.o

# Ajout de la compilation pour B/somme_liste.o
$(SRC_B)/test_somme_liste.o: $(SRC_B)/test_somme_liste.c $(SRC_B)/somme_liste.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_B)/test_somme_liste.c -o $(SRC_B)/test_somme_liste.o

$(SRC_B)/somme_liste.o: $(SRC_B)/somme_liste.c $(SRC_B)/somme_liste.h $(SRC_A)/util_rand.h
	$(CC) $(CFLAGS) -c $(SRC_B)/somme_liste.c -o $(SRC_B)/somme_liste.o

# Ajout de la compilation pour B/searchArray.o
$(SRC_B)/test_searchArray.o: $(SRC_B)/test_searchArray.c $(SRC_B)/searchArray.h
	$(CC) $(CFLAGS) -c $(SRC_B)/test_searchArray.c -o $(SRC_B)/test_searchArray.o

$(SRC_B)/searchArray.o: $(SRC_B)/searchArray.c $(SRC_B)/searchArray.h
	$(CC) $(CFLAGS) -c $(SRC_B)/searchArray.c -o $(SRC_B)/searchArray.o

# Nettoyage des fichiers objets et exécutables de test
clean:
	rm -f $(SRC_A)/*.o $(SRC_B)/*.o $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT) $(EXEC_SOMME) $(EXEC_SEARCH)

# Nettoyage total
mrproper: clean
	rm -f $(EXEC_DE) $(EXEC_RAND) $(EXEC_STAT) $(EXEC_SOMME) $(EXEC_SEARCH)
