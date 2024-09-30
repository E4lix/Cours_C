#ifndef POINT_H
#define POINT_H

// Prototypage
struct Point {
    char nom;
    float x;
    float y;
};

void afficher_Point(struct Point p);

struct Point saisir_Point();

void initialiser_Point(struct Point *pp);

struct Point *allouer_Point();

void liberer_Point(struct Point *pp);

#endif