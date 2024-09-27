#ifndef ALLOCATION_H
#define ALLOCATION_H

struct Individu *allouer_Individu();

void liberer_Individu(struct Individu *pi);

void initialiser_Individu(struct Individu *pi);

#endif