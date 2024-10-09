#include "matrix.h"
#include "matrix_io.h"
#include <stdio.h>
#include <stdlib.h>

void init_matrix(struct matrix *mat, int lines, int cols)
{
    mat->lines = lines;
    mat->cols = cols;

    // Allocation des lignes (tableau de pointeurs)
    mat->m = (int **)malloc(lines * sizeof(int *));

    // Allocation des colonnes pour chaque ligne
    for (int i = 0; i < lines; i++)
    {
        mat->m[i] = (int *)malloc(cols * sizeof(int));
    }
}

void print_matrix(struct matrix *mat)
{
    for (int i = 0; i < mat->lines; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            printf("%d ", mat->m[i][j]);
        }
        printf("\n");
    }
}

void free_matrix(struct matrix *mat)
{
    for (int i = 0; i < mat->lines; i++)
    {
        free(mat->m[i]); // Libère chaque ligne
    }
    free(mat->m); // Libère le tableau de pointeurs
}

// Fonction pour lire la matrice à partir d'un fichier
int read_matrix_from_file(const char *filename, struct matrix *mat)
{
    FILE *flot = fopen(filename, "r");
    if (!flot)
    {
        printf("Impossible d'ouvrir le fichier %s\n", filename);
        return 0;
    }

    // Lire les dimensions de la matrice
    fscanf(flot, "%d %d", &mat->lines, &mat->cols);

    // Initialiser la matrice avec les dimensions lues
    init_matrix(mat, mat->lines, mat->cols);

    // Lire les valeurs de la matrice
    for (int i = 0; i < mat->lines; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            fscanf(flot, "%d", &mat->m[i][j]);
        }
    }

    fclose(flot);
    return 1;
}

// Fonction pour écrire la matrice dans un fichier
int write_matrix_to_file(const char *filename, struct matrix *mat){
    FILE *flot;

    if ((flot = fopen(filename, "w")) == NULL) {
        printf("Erreur d'ouverture du fichier %s\n", filename);
        return EXIT_FAILURE;
    }
    printf("Construction du fichier %s\n", filename);
    // Lire les valeurs de la matrice
    fprintf(flot, "%d %d \n", mat->lines, mat->cols);
    for (int i = 0; i < mat->lines; i++)
    {
        for (int j = 0; j < mat->cols; j++)
        {
            fprintf(flot, "%d ", mat->m[i][j]);
        }
        fprintf(flot, "\n");
    }
    fclose(flot);
    return EXIT_SUCCESS;
}

// Additionner 2 matrices
struct matrix add_matrix(struct matrix *mat1, struct matrix *mat2){
    struct matrix *rslt_matrix = (struct matrix *)malloc(sizeof(struct matrix));

    init_matrix(rslt_matrix, mat1->lines, mat1->cols);

    for (int i = 0; i < mat1->lines; i++) {
        for (int j = 0; j < mat1->cols; j++){
            rslt_matrix->m[i][j] = mat1->m[i][j] + mat2->m[i][j];
        }
    }

    return *rslt_matrix;
}

// Multiplication de 2 matrices
struct matrix mult_matrix(struct matrix *mat1, struct matrix *mat2){
    struct matrix *rslt_matrix = (struct matrix *)malloc(sizeof(struct matrix));

    init_matrix(rslt_matrix, mat1->lines, mat2->cols);

    for (int i = 0; i < mat1->lines; i++) {
        for (int j = 0; j < mat2->cols; j++){
            rslt_matrix->m[i][j] = 0;
            for (int k = 0; k < mat1->cols; k++){
                rslt_matrix->m[i][j] = rslt_matrix->m[i][j] + mat1->m[i][k] * mat2->m[k][j];
            }
        }
    }

    return *rslt_matrix;
}

// Vérifier si un matrice est triangulaire
int is_triangular(struct matrix *mat){
    int lignes = mat->lines;
    int colonnes = mat->cols;

    int tri_up = 0;
    int tri_down = 0;

    // Test si triangulaire up
    for (int i = 0; i < lignes; i++) {
        for (int j = i; j <= colonnes; j++)
        {
            if(i != j){
                tri_up = tri_up + mat->m[i][j];
            }
        }
    }

    // Test si triangulaire down
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < i; j++)
        {
            tri_down = tri_down + mat->m[i][j];
        }
    }

    if(tri_up + tri_down == 0){
        return 3;
    }
    else if(tri_down == 0 && tri_up != 0){
        return 2;
    }
    else if (tri_up == 0 && tri_down != 0){
       return 1;
    }
    else{
        return 0;
    }
}