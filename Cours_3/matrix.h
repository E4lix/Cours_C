#ifndef MATRIX_H
#define MATRIX_H

// Structure de la matrice
typedef struct matrix
{
    int **m;   // Matrice dynamique (pointeur vers pointeurs)
    int lines; // Nombre de lignes
    int cols;  // Nombre de colonnes
} matrix;

#endif