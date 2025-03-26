/*
Réponse

Une liste chaînée est clairement le meilleur choix pour implémenter une pile.
 Contrairement à un tableau statique, elle permet d'ajouter et de retirer des éléments 
 sans se soucier de la taille, ce qui la rend bien plus flexible. Niveau performance, 
 c'est aussi plus efficace : une liste chaînée permet d'insérer et de supprimer des éléments en O(1),
  alors qu'un tableau statique peut aller jusqu'à O(n) s'il faut le redimensionner.



Tableau statique : Permet un accès direct aux éléments en O(1), mais sa taille est fixée à l'avance, 
ce qui peut entraîner un gaspillage de mémoire ou un manque d'espace.
L'ajout et la suppression sont coûteux en O(n) à cause des décalages nécessaires.

Tableau dynamique : Similaire au tableau statique mais peut changer de taille 
en allouant une nouvelle mémoire et en copiant les données. L'accès reste rapide en O(1),
 mais les insertions peuvent être coûteuses si un redimensionnement est nécessaire.

Liste chaînée : Structure flexible où chaque élément contient un pointeur vers le suivant. 
L'ajout et la suppression sont rapides en O(1) si l'on travaille en tête, mais l'accès à un 
élément spécifique prend O(n) car il faut parcourir la liste.

Liste doublement chaînée : Variante de la liste chaînée où chaque élément pointe à la fois 
vers son prédécesseur et son successeur. Permet des insertions et suppressions efficaces à 
n'importe quelle position mais consomme plus de mémoire.

Liste circulaire : Version chaînée où le dernier élément pointe vers le premier.
Utile pour des structures de type file circulaire, mais nécessite une gestion particulière 
pour éviter les boucles infinies.

*/