#ifndef MATRIX_IO_H
#define MATRIX_IO_H

// Initialiser une matrice
void init_matrix(struct matrix *mat, int lines, int cols);

// Afficher une matrice
void print_matrix(struct matrix *mat);

// Lire une matrice depuis un fichier
int read_matrix_from_file(const char *filename, struct matrix *mat);

// Ecrire une matrice dans un fichier
int write_matrix_to_file(const char *filename, struct matrix *mat);

// Libérer la mémoire alloué à une matrice
void free_matrix(struct matrix *mat);

// Addition de 2 matrices
struct matrix add_matrix(struct matrix *mat1, struct matrix *mat2);

// Multiplication de 2 matrices
struct matrix mult_matrix(struct matrix *mat1, struct matrix *mat2);

// Vérifier si une matrice est triangulaire
int is_triangular(struct matrix *mat);

#endif