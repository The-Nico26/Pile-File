#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

struct Element{
 TYPE_VARIABLE valeur;
 Element *next;
};
struct Pile{
 Element *first;
};

Pile *p_init(){
 Pile *pile = malloc(sizeof(Pile));
 p_secuPile(pile);
 pile->first = NULL;
 return pile;
}

void p_empiler(Pile *pile, TYPE_VARIABLE valeur){
 p_secuPile(pile);
 Element *add = malloc(sizeof(Element));
 p_secuElement(add);

 add->valeur = valeur;
 add->next = pile->first;
 pile->first = add;

}

TYPE_VARIABLE p_depiler(Pile *pile){
 p_secuPile(pile);
 TYPE_VARIABLE valeur = NULL;

 if(pile->first != NULL){
  Element *element = pile->first;
  valeur = element->valeur;
  pile->first = element->next;
  free(element);
 }
 return valeur;
}

void p_toString(Pile *pile){
 p_secuPile(pile);
 if(pile->first == NULL){
  printf("La Pile est vide\n");
  return;
 }
 Element *element = pile->first;
 printf("Etat de la Pile :\n");
 while(element != NULL){
  printf("%d ", element->valeur);
  element = element->next;
 }
 printf("\n");
}
void p_secuPile(Pile *pile){
 if(pile == NULL)
  exit(EXIT_FAILURE);
}

void p_secuElement(Element *element){
 if(element == NULL)
  exit(EXIT_FAILURE);
}
